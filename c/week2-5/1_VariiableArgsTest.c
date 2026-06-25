//声明一个可变参数的函数，用于计算多个整数的平均值
#include <stdio.h>
#include <stdarg.h>

double average(int count ,...){   //count来记录可变参数的个数
    double sum = 0.0;
    va_list age;   //用va_list类型的变量来存储可变参数
    va_start(age,count); //用来初始化va_list变量
    for(int i = 0;i < count;i++){
        int num = va_arg(age,int);  //依次取出每个可变参数
        sum+=num;
    }
    va_end(age);    //结束可变参数的处理
    return sum / count;
} 
int main (void) {
    double avg = average(5,10,20,30,40,50);
    printf("%d\n",avg);
    return 0;
}


