#include <stdio.h>
int main(void) {
    printf("現在の年齢を整数で入力してください\n");
    int age;
    scanf("%d",&age);
    age += 5;
    printf("5年後は%d歳ですね", age);
}