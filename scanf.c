#include <stdio.h>
int main(void) {
    printf("整数を入力してください。\n");
    int number;
    scanf("%d",&number);
    printf("%dの16進数は%x、8進数は%oです。\n",number,number,number);
}