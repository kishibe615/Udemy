#include <stdio.h>
int main(void) {
    int answer = 15;
    int i;
    do{
        printf("1から20までの数字を当ててください:");
        scanf("%2d", &i);
        if(i < answer){
            printf("もっと大きな数字です！\n");
        }else if(i > answer){
            printf("もっと小さな数字です！\n");
        }else{
            printf("正解です！\n");
            // breakでも可 (その場合，whileの真偽値は1に)
        }
    }while(i != answer);
    return 0;
}