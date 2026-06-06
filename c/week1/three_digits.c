/*
 * @Author: Roland-ho 1921099735@qq.com
 * @Date: 2026-06-04 17:00:29
 * @LastEditors: Roland-ho 1921099735@qq.com
 * @LastEditTime: 2026-06-05 00:14:43
 * @FilePath: /roland-dev/c/three_digits.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <stdio.h>

int main() {
    // 输入N
    int N;
    printf("请输入一个整数N（3~7）：");
    scanf("%d", &N);

    // 计算N位数的范围
    int start = 1;
    for (int i = 1; i < N; i++) {
        start *= 10;
    }
    int end = start * 10 - 1;

    // 枚举每个数
    for (int num = start; num <= end; num++) {
        int temp = num;
        int sum = 0;

        // 拆数字
        while (temp > 0) {
            int digit = temp % 10;  // 取个位
            temp /= 10;             // 去掉个位

            // 计算 digit 的 N 次方（循环累乘）
            int power = 1;
            for (int i = 0; i < N; i++) {
                power *= digit;
            }

            sum += power;  // 累加
        }

        // 判断是否是水仙花数
        if (sum == num) {
            printf("%d\n", num);
        }
    }

    return 0;
}