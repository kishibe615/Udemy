#include <stdio.h>
int main(void) {
    printf("得点を判定します．数学と国語の得点を0から100の定数で入力してください\n");
    printf("数学の点数を入力してください\n");
    int math;
    scanf("%d", &math);
    printf("国語の点数を入力してください\n");
    int japanese;
    scanf("%d", &japanese);
    if(math >= 40 && japanese >= 60){
        printf("合格おめでとう！\n");
        return 0;
    }if(math >= 40 || japanese >= 60){
        printf("再試験を受けてね！\n");
        return 0;
    }if(math < 40 && japanese < 60){
        printf("補習を受けてね！\n");
        return 0;
    }
    return 0;
}