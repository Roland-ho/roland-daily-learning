/* 计算器V1：输入两个数 + 运算符，实现加减乘除 */
#include <stdio.h>

int main() {
    printf("欢迎使用简易计算器，输入 0+0 可以退出计算器\n");
    printf("本计算器仅支持加减乘除运算符\n");
    
    double i, j, result;
    char op;
    
    while(1) {
        printf("\n请输入算式例如:3+5 (输入 0+0 退出): ");
        
        // 方法1：检查 scanf 返回值
        if(scanf("%lf%c%lf", &i, &op, &j) != 3) {
            printf("输入格式错误！请使用格式：数字+运算符+数字 (如 3+5)\n");
            // 清空输入缓冲区
            while(getchar() != '\n');
            continue;  // 重新输入
        }
        
        // 退出条件
        if(i == 0 && op == '+' && j == 0) {
            printf("感谢使用！\n");
            break;
        }
        
        // 计算
        switch(op) {
            case '+':
                result = i + j;
                break;
            case '-':
                result = i - j;
                break;
            case '*':
                result = i * j;
                break;
            case '/':
                if(j == 0) {
                    printf("错误：除数不能为0！\n");
                    continue;
                }
                result = i / j;
                break;
            default:
                printf("不支持的运算符：%c，程序退出\n", op);
                return 1;
        }
        
        printf("%.2lf %c %.2lf = %.2lf\n", i, op, j, result);
    }
    
    return 0;
}