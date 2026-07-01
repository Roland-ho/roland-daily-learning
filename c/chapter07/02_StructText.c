/*
 * @Author: Roland-ho 1921099735@qq.com
 * @Date: 2026-06-29 22:59:03
 * @LastEditors: Roland-ho 1921099735@qq.com
 * @LastEditTime: 2026-06-30 11:37:20
 * @FilePath: /chapter07/02_StructText.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <stdio.h>
#define N 3

// 1. 先定义结构体（在使用之前）
struct student {
  int id;
  char* name;
  char* gender;
  int score;
};

// 2. 再声明函数（此时 struct student 已经定义）
double processScore(struct student* stu, int n);
void printstudent(struct student* arr, int n,
                  double (*pointfunction)(struct student*, int));

int main(void) {
  struct student stu[N] = {
      {.id = 1000, .name = "一一", .gender = "一", .score = 90},
      {.id = 1001, .name = "二二", .gender = "二", .score = 70},
      {.id = 1002, .name = "三三", .gender = "四", .score = 80}};

  printf("学生的平均成绩为：%lf\n", processScore(stu, N));
  printstudent(stu, N, processScore);

  return 0;
}

double processScore(struct student* stu, int n) {
  int sum = 0;
  // 3. 使用参数 n，而不是全局 N
  for (int i = 0; i < n; i++) {
    sum += stu[i].score;
  }
  return (double)sum / n;  // 这里也改成 n
}

void printstudent(struct student* arr, int n,
                  double (*pointfunction)(struct student*, int)) {
  printf("=========超过全班平均成绩的学生==========\n");
  double avg = pointfunction(arr, n);
  printf("全班平均分：%.2f\n", avg);
  printf("----------------------------------------\n");

  for (int i = 0; i < n; i++) {
    if (arr[i].score > avg) {
      printf("学生姓名：%s\t学生成绩：%d\n", arr[i].name, arr[i].score);
    }
  }
}