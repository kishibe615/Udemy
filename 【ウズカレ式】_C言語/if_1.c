#include <stdio.h>
int main(void) {
    int num;
    scanf("%d", &num);
    if(num == 1){
        printf("公園に行きましょう!\n");
        // インデントは忘れない
    }else{
        printf("家で勉強をしましょう！\n");
    }
    return 0;
}