#include <stdio.h>

int main (void){

//     char arr[7][10] = {"MONDAY","TUESDAY","WEND","THU","FRI","STA","SUBN"};
//     for(int i = 0;i<7;i++){
//         printf ("%s\t",arr[i]);
//     }

    char *str_Arr[7] = {"MONDAY","TUESDAY","WEND","THU","FRI","STA","SUBN"};
    for(int i = 0;i<7;i++){
        printf ("%s\t",str_Arr[i]);
    }
    printf("\n");


    return 0;
}