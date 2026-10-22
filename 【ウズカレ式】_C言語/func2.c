#include <stdio.h>
int main(void){
    printf("文章を入力してください\n");
    int input;
    while(1){
        input = getchar();
        if(input == EOF){
            printf("終了します\n");
            break;
        }
        putchar(input);
    }
    return 0;   
}