#include <stdio.h>

int countMax(int arr[], int n);

int main(void){
    int number = 10;
    int arr[10];

    for(int i = 0; i < number; i++){
        scanf("%d", &arr[i]);
    }

    printf("%d\n", countMax(arr, number));

    return 0;
}

int countMax(int arr[], int n){
    int max = arr[0];
    int count = 0;

    for(int i = 1; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    for(int i = 0; i < n; i++){
        if(arr[i] == max){
            count++;
        }
    }

    return count;
}