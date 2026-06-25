#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_STUDENTS 200  // 最大学生容量
#define COURSE_COUNT 4    // 课程门数

// 学生成绩结构体：存储学生完整信息
typedef struct {
    char studentId[15];    // 学号
    char name[20];         // 姓名
    char className[30];    // 班级
    float scores[COURSE_COUNT]; // 4门课程成绩
    float totalScore;      // 总分
    float average;         // 平均分
    char semester[20];     // 学期
} Student;

// 函数声明
void showMainMenu();
void addStudentInfo(Student stu[], int *count);
void modifyStudentInfo(Student stu[], int count);
void statisticsAndSort(Student stu[], int count);
void queryStudentScore(Student stu[], int count);
void showFailedStudents(Student stu[], int count);
void printClassReport(Student stu[], int count);
void saveDataToFile(Student stu[], int count);
void loadDataFromFile(Student stu[], int *count);
void calculateScore(Student *s);
int findStudentById(Student stu[], int count, char id[]);

int main() {
    Student students[MAX_STUDENTS];
    int stuCount = 0;
    int choice;
    
    loadDataFromFile(students, &stuCount); // 启动加载本地数据
    
    while(1) {
        showMainMenu();
        printf("请输入您的选择：");
        scanf("%d", &choice);
        system("cls");
        
        switch(choice) {
            case 1: addStudentInfo(students, &stuCount); break;
            case 2: modifyStudentInfo(students, stuCount); break;
            case 3: statisticsAndSort(students, stuCount); break;
            case 4: queryStudentScore(students, stuCount); break;
            case 5: showFailedStudents(students, stuCount); break;
            case 6: printClassReport(students, stuCount); break;
            case 7:
                saveDataToFile(students, stuCount);
                printf("数据已保存到本地文件！\n");
                break;
            case 0:
                saveDataToFile(students, stuCount);
                printf("数据已自动保存，感谢使用！\n");
                return 0;
            default: printf("输入无效，请重新选择！\n");
        }
        
        printf("\n按任意键返回主菜单...");
        system("pause");
        system("cls");
    }
    return 0;
}

// 显示主菜单
void showMainMenu() {
    printf("=====================================\n");
    printf("      学生成绩管理系统\n");
    printf("=====================================\n");
    printf("      1. 学生成绩录入\n");
    printf("      2. 学生成绩修改\n");
    printf("      3. 班级成绩统计与排序\n");
    printf("      4. 学生成绩查询\n");
    printf("      5. 不及格学生名单\n");
    printf("      6. 班级成绩单输出\n");
    printf("      7. 手动保存数据\n");
    printf("      0. 退出系统\n");
    printf("=====================================\n");
}

// 计算单个学生的总分与平均分
void calculateScore(Student *s) {
    s->totalScore = 0;
    for(int i = 0; i < COURSE_COUNT; i++) {
        s->totalScore += s->scores[i];
    }
    s->average = s->totalScore / COURSE_COUNT;
}

// 根据学号查找学生，返回数组下标，未找到返回-1
int findStudentById(Student stu[], int count, char id[]) {
    for(int i = 0; i < count; i++) {
        if(strcmp(stu[i].studentId, id) == 0) return i;
    }
    return -1;
}

// 学生成绩录入：支持批量录入，自动去重学号
void addStudentInfo(Student stu[], int *count) {
    int n;
    printf("===== 学生成绩录入 =====\n");
    printf("请输入要录入的学生人数：");
    scanf("%d", &n);
    
    if(*count + n > MAX_STUDENTS) {
        printf("学生数量超出系统上限，无法录入！\n");
        return;
    }
    
    for(int i = 0; i < n; i++) {
        printf("\n第%d个学生信息录入：\n", i+1);
        printf("学号：");
        scanf("%s", stu[*count].studentId);
        
        if(findStudentById(stu, *count, stu[*count].studentId) != -1) {
            printf("该学号已存在，跳过本条数据！\n");
            i--;
            continue;
        }
        
        printf("姓名：");
        scanf("%s", stu[*count].name);
        printf("班级：");
        scanf("%s", stu[*count].className);
        printf("学期：");
        scanf("%s", stu[*count].semester);
        printf("请输入%d门课程成绩：\n", COURSE_COUNT);
        for(int j = 0; j < COURSE_COUNT; j++) {
            printf("课程%d：", j+1);
            scanf("%f", &stu[*count].scores[j]);
        }
        
        calculateScore(&stu[*count]);
        (*count)++;
        printf("学生信息录入成功！\n");
    }
}

// 学生成绩修改：支持修改姓名、班级、学期、各科成绩
void modifyStudentInfo(Student stu[], int count) {
    char id[15];
    int index, choice;
    printf("===== 学生成绩修改 =====\n");
    if(count == 0) { printf("暂无学生数据！\n"); return; }
    
    printf("请输入待修改学生的学号：");
    scanf("%s", id);
    index = findStudentById(stu, count, id);
    
    if(index == -1) { printf("未找到对应学号的学生！\n"); return; }
    
    printf("\n当前学生信息：%s | %s | %s | %s\n",
        stu[index].studentId, stu[index].name, stu[index].className, stu[index].semester);
    printf("请选择修改项：\n");
    printf("1.姓名  2.班级  3.学期  4.课程成绩  0.取消\n");
    printf("输入选择：");
    scanf("%d", &choice);
    
    switch(choice) {
        case 1:
            printf("新姓名：");
            scanf("%s", stu[index].name);
            printf("姓名修改完成！\n"); break;
        case 2:
            printf("新班级：");
            scanf("%s", stu[index].className);
            printf("班级修改完成！\n"); break;
        case 3:
            printf("新学期：");
            scanf("%s", stu[index].semester);
            printf("学期修改完成！\n"); break;
        case 4:
            printf("输入新的%d门课程成绩：\n", COURSE_COUNT);
            for(int i = 0; i < COURSE_COUNT; i++) {
                printf("课程%d：", i+1);
                scanf("%f", &stu[index].scores[i]);
            }
            calculateScore(&stu[index]);
            printf("成绩修改完成，总分与平均分已更新！\n");
            break;
        case 0: printf("已取消修改。\n"); return;
        default: printf("输入错误！\n");
    }
}

// 按班级统计成绩，按平均分降序排序
void statisticsAndSort(Student stu[], int count) {
    char className[30];
    Student tempStu[MAX_STUDENTS];
    int tempCount = 0;
    Student t;
    
    printf("===== 班级成绩统计与排序 =====\n");
    if(count == 0) { printf("暂无学生数据！\n"); return; }
    
    printf("请输入统计班级：");
    scanf("%s", className);
    
    // 筛选对应班级学生
    for(int i = 0; i < count; i++) {
        if(strcmp(stu[i].className, className) == 0) {
            tempStu[tempCount++] = stu[i];
        }
    }
    
    if(tempCount == 0) { printf("该班级无学生数据！\n"); return; }
    
    // 冒泡排序：平均分从高到低
    for(int i = 0; i < tempCount - 1; i++) {
        for(int j = 0; j < tempCount - 1 - i; j++) {
            if(tempStu[j].average < tempStu[j+1].average) {
                t = tempStu[j];
                tempStu[j] = tempStu[j+1];
                tempStu[j+1] = t;
            }
        }
    }
    
    // 输出排名结果
    printf("\n%s 班级成绩排名（按平均分降序）\n", className);
    printf("排名\t学号\t\t姓名\t总分\t平均分\n");
    printf("----------------------------------------\n");
    for(int i = 0; i < tempCount; i++) {
        printf("%d\t%s\t%s\t%.1f\t%.1f\n",
            i+1, tempStu[i].studentId, tempStu[i].name,
            tempStu[i].totalScore, tempStu[i].average);
    }
    
    // 班级整体统计
    float classAvgSum = 0;
    for(int i = 0; i < tempCount; i++) classAvgSum += tempStu[i].average;
    printf("----------------------------------------\n");
    printf("班级总人数：%d人 | 班级平均成绩：%.1f\n", tempCount, classAvgSum / tempCount);
}

// 按学号查询学生详细成绩
void queryStudentScore(Student stu[], int count) {
    char id[15];
    int index;
    printf("===== 学生成绩查询 =====\n");
    if(count == 0) { printf("暂无学生数据！\n"); return; }
    
    printf("请输入查询学号：");
    scanf("%s", id);
    index = findStudentById(stu, count, id);
    
    if(index == -1) { printf("未找到对应学生！\n"); return; }
    
    printf("\n学生成绩详情\n");
    printf("学号：%s  姓名：%s  班级：%s  学期：%s\n",
        stu[index].studentId, stu[index].name, stu[index].className, stu[index].semester);
    printf("各科成绩：\n");
    for(int i = 0; i < COURSE_COUNT; i++) {
        printf("  课程%d：%.1f", i+1, stu[index].scores[i]);
        if(stu[index].scores[i] < 60) printf(" 【不及格】");
        printf("\n");
    }
    printf("总分：%.1f  平均分：%.1f\n", stu[index].totalScore, stu[index].average);
}

// 输出所有不及格学生及对应科目
void showFailedStudents(Student stu[], int count) {
    int hasFail = 0;
    printf("===== 不及格学生名单 =====\n");
    if(count == 0) { printf("暂无学生数据！\n"); return; }
    
    printf("学号\t\t姓名\t班级\t\t不及格科目\n");
    printf("------------------------------------------------\n");
    
    for(int i = 0; i < count; i++) {
        char failList[100] = "";
        int failNum = 0;
        
        for(int j = 0; j < COURSE_COUNT; j++) {
            if(stu[i].scores[j] < 60) {
                char buf[15];
                sprintf(buf, "课程%d ", j+1);
                strcat(failList, buf);
                failNum++;
            }
        }
        
        if(failNum > 0) {
            printf("%s\t%s\t%s\t%s\n",
                stu[i].studentId, stu[i].name, stu[i].className, failList);
            hasFail = 1;
        }
    }
    
    if(!hasFail) printf("当前无不及格学生！\n");
}

// 按班级输出完整成绩单
void printClassReport(Student stu[], int count) {
    char className[30];
    printf("===== 班级成绩单输出 =====\n");
    if(count == 0) { printf("暂无学生数据！\n"); return; }
    
    printf("请输入班级：");
    scanf("%s", className);
    
    printf("\n==================== %s 成绩单 ====================\n", className);
    printf("学号\t\t姓名\t课程1\t课程2\t课程3\t课程4\t总分\t平均分\n");
    printf("------------------------------------------------------------------------\n");
    
    int found = 0;
    for(int i = 0; i < count; i++) {
        if(strcmp(stu[i].className, className) == 0) {
            printf("%s\t%s\t%.1f\t%.1f\t%.1f\t%.1f\t%.1f\t%.1f\n",
                stu[i].studentId, stu[i].name,
                stu[i].scores[0], stu[i].scores[1], stu[i].scores[2], stu[i].scores[3],
                stu[i].totalScore, stu[i].average);
            found = 1;
        }
    }
    
    if(!found) printf("该班级无学生数据！\n");
    printf("------------------------------------------------------------------------\n");
}

// 二进制方式保存数据到本地文件
void saveDataToFile(Student stu[], int count) {
    FILE *fp = fopen("student.dat", "wb");
    if(fp == NULL) { printf("文件写入失败！\n"); return; }
    fwrite(&count, sizeof(int), 1, fp);
    fwrite(stu, sizeof(Student), count, fp);
    fclose(fp);
}

// 从本地文件加载数据
void loadDataFromFile(Student stu[], int *count) {
    FILE *fp = fopen("student.dat", "rb");
    if(fp == NULL) { *count = 0; return; }
    fread(count, sizeof(int), 1, fp);
    fread(stu, sizeof(Student), *count, fp);
    fclose(fp);
}