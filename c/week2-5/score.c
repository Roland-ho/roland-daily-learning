#include <stdio.h>

double average(int arr[], int n);
int maxScore(int arr[], int n);
int minScore(int arr[], int n);
int failCount(int arr[], int n);

int main(void){
    int arr[100];
    int number;

    printf("请输入学生人数\n");
    scanf("%d", &number);

    printf("请输入学生的成绩\n");
    for(int i = 0; i < number; i++){
        scanf("%d", &arr[i]);
    }

    double avg = average(arr, number);
    int max = maxScore(arr, number);
    int min = minScore(arr, number);
    int fail = failCount(arr, number);

    printf("平均分为%.2f\n", avg);
    printf("最高分为%d\n", max);
    printf("最低分为%d\n", min);
    printf("不及格人数为%d\n", fail);

    return 0;
}

double average(int arr[], int n){
    double sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    return sum / n;
}

int maxScore(int arr[], int n){
    int max = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int minScore(int arr[], int n){
    int min = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

int failCount(int arr[], int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] < 60){
            count++;
        }
    }
    return count;
}