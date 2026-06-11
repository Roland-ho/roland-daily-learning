#include <stdio.h>
void sum(int b);
int main() {
    int x;
    scanf("%d",&x);
    sum(x);
    return 0;
}
void sum(int b){
    int svc =0;
    for(int i = 1;i<b+1;i++){
        svc+=i;
    }
    printf("%d\n",svc);
}