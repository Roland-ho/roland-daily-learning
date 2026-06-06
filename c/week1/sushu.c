
#include <stdio.h>
int main () {
    int m,n;
    int count = 0;
    int sum = 0;
    scanf("%d %d",&m,&n);
    if(m==1)
    m=2;
    for(int i = m;i<=n;i++){
        int isPrim = 0;
        int k;
        for(k =2;k<=i-1;k++){
            if(i%k == 0){
                isPrim = 1;
                break;
            }
        }
        if(isPrim == 0){
            count ++;
            sum+=i;
        }
    }
    printf("%d %d\n",count,sum);
    return 0;
}