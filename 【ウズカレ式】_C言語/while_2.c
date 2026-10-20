#include <stdio.h>
int main(void) {
    printf("10+12=?\n");
    int i;
    scanf("%d", &i);
    while(i != 22){
        printf("違います！もう一度！\n");
        scanf("%d", &i);
        // while文内でもscanf関数を繰り返す
    }
    printf("正解です！\n");
    return 0;
}