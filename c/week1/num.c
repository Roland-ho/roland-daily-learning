/*
 * @Author: Roland-ho 1921099735@qq.com
 * @Date: 2026-06-05 01:30:29
 * @LastEditors: Roland-ho 1921099735@qq.com
 * @LastEditTime: 2026-06-05 17:09:07
 * @FilePath: /roland-dev/c/num.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
 #include <stdio.h>
 int main () {
    int n;
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){
        for(int j =1;j<=i;j++){
                printf("%d*%d=%d  ",j,i,j*i);
        }
printf("\n");


    }
    return 0;
 }