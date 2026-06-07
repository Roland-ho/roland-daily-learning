#include <stdio.h>
int main () {
    int a,n;
    int sum = 0;
    scanf("%d %d",&a,&n);
    //2 22 222 0*10+2 2*10+2 (2*10+2)*10+2
    int t = 0;
    for( int j = 0;j < n;j ++){
        t = t*10 + a;
        sum += t;
    } 
    printf("%d\n",sum);
    return 0;
}