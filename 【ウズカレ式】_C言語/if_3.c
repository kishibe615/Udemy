#include <stdio.h>
int main(void) {
    printf("得点を判定します．数学なら1, 国語なら2を入力してください．\n");
    int subject;
    scanf("%d", &subject);
    printf("得点を0から100の定数で入力してください\n");
    int score;
    scanf("%d", &score);
    if(subject == 1){
        if(score >= 40){
            printf("数学の試験に合格!\n");
        }else{
            printf("数学の試験に不合格!\n");
        }
    }else if(subject == 2){
        if(score >= 60){
            printf("国語の試験に合格!\n");
        }else{
            printf("国語の試験に不合格!\n");
        }
    }else{
        printf("処理できません\n");
    }
    return 0;
}