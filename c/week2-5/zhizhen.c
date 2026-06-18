#include <stdio.h>
#define ROWS 3
#define COLS 4

int main (void) {
    int arr[ROWS][COLS] = {{10,20,30,40},
                           {50,60,70,80},
                           {120,110,100,90}};
    int max = arr[0][0];
    int *p = arr[0];
    int i,j;
    
    for(i = 0;i<ROWS;i++){
        for(j = 0;j<COLS;j++){
            if(max < *(p+i*COLS + j))
            max = *(p + i*COLS + j);
        }
    }

    printf("%d\n",max);


    return 0;
}