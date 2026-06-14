//冒泡排序
#include <stdio.h>
int main (void){
    int arr[10] = {3,1,2,4,5,6,7,8,0,9};
    for(int i =0;i<9;i++){
        for(int j =0;j<10-1-i;j++){
            if(arr[j]>arr[j+1]){
                int t =arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
    for(int a =0;a<10;a++){
        printf("%d\t",arr[a]);
    }
    return 0;
}