//选择排序
#include <stdio.h>
int main (void){
    int arr[10] = {3,1,2,4,5,6,7,8,0,9};
    for(int i =0;i<9;i++){
        for(int j =i+1;j<10;j++){
            if(arr[i]<arr[j]){
                int t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }
    for(int a =0;a<10;a++){
        printf("%d\t",arr[a]);
    }
    return 0;
}