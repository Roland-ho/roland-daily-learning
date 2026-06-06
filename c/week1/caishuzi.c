#include <stdio.h>
int main () {
    int n,times;
    int count = 0;
    scanf("%d %d",&n,&times);
    while(1){
        int i;
        scanf("%d",&i);
        count ++;
        if(count == times + 1){
            printf("Game Over\n");
            break;
        }else if(i == n && count == 1){
            printf("Bingo!\n");
            break;
        }else if(i == n && count <= 3){
            printf("Luck You!\n");
            break;
        }else if(i == n && count>3){
            printf("Goog Guess!\n");
            break;
        }else if(i<n){
            printf("Too small\n");
        }else if(i>n){
            printf("Too Big\n");
        }
    } 
    return 0;
}
