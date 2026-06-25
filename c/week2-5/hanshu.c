#include <stdio.h>

int age(int n);

int main(void){

    return 0;
}

int age(int n){
//     int age;
//     if(n == 1)
//     return 10;
//     else {
//     for(int i = 1;i<n;i++){
//         age+=2;
//     }
//     return age;
// }
if(n == 1){
    return 10;
} else{
    return age(n-1)+2;
}
}