#include <stdio.h>
int main(void) {
    int num = 10;
    num = num/2;
    num += 15;
    num++;
    --num;
    num *= 2;
    num = num + 5 * num/(num - 15);
    printf("演算結果は%d\n", num);
    return 0;
}