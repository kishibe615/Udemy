#include <stdio.h>
int main(void) {
    int scores[5] = {43,53,62,71,89};
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += scores[i];
    }
    float ave = (float)sum / 5;
    // int型であるsumをfloat型に変換し，小数部分の切り捨てを防ぐ
    // (float)がない場合は，63.0点
    printf("平均点は%.1f点です\n", ave);
    return 0;
}