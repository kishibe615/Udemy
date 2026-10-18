#include <stdio.h>
int main(void) {
    printf("好きなアイスの番号を入力してください\n1:バニラ\n2:チョコ\n3:ミント\n");
    int icecream;
    scanf("%d",&icecream);
    switch(icecream){
        case 1:
            printf("バニラは定番ですよね\n");
            break;
        case 2:
            printf("チョコ味おいしいですよね\n");
            break;
        case 3:
            printf("ミントは珍しいですね\n");
            break;
        default:
            printf("選択肢にない番号です\n");
            break;
    }
    return 0;
}