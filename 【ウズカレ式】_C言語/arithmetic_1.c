#include <stdio.h>
int main(void) {
    printf("高さ(m)を整数で入力してください。\n");
    int num1;
    scanf("%d",&num1);
    printf("%dが入力されました\n",num1);
    printf("次に横幅(m)を整数で入力してください。\n");
    int num2;
    scanf("%d",&num2);
    printf("%dが入力されました\n",num2);
    int num = num1 * num2;
    printf("面積は%d平方メートルです\n",num);
}