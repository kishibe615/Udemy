#include <stdio.h>
int main(void) {
    int scores[5] = {40,50,60,70,80};
    for (int i = 0; i < 5; i++) {
        printf("第%d科目の得点は%d点\n",i+1, scores[i]);
    }
    return 0;
}