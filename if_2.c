#include <stdio.h>
int main(void) {
    printf("今日の天気は何ですか？晴れなら0, 曇りなら1, 雨なら2を入力してください。\n");
    int num;
    scanf("%d", &num);
    if(num == 0){
        printf("公園に行きましょう!\n");
        // インデントは忘れない
    }else if(num == 1){
        printf("傘を持って行きましょう！\n");
    }else if(num == 2){
        printf("家で勉強をしましょう！\n");
    }else{
        printf("入力違反です！\n");
    }
    return 0;
}