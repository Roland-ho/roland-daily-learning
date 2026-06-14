#include <stdio.h>
int main(void){
    int arr[100];
    int number;
    int i,x;
    scanf("%d",&number);
    for(i =0;i<number;i++){
        scanf("%d",&arr[i]);
    }
    printf("请输入要删除的数字\n");
    scanf("%d",&x);
    int isnumber =0;
    for (i=0;i<number;i++){
        if(arr[i]!=x){
            arr[isnumber]=arr[i];
            isnumber++;
        }
    }
    for(i=0;i<isnumber;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}