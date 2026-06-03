#include <stdio.h>
int main () {
    int a,b,c,d,e,f;
    scanf("%d %d",&a,&b);
    c = a / 100 * 60;
    d = a % 100;
    e = c + d + b;
    f = (e / 60) * 100 + (e % 60);
    printf("%d\n",f);
    return 0;
}