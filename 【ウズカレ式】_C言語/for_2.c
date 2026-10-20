#include <stdio.h>
int main(void) {
    for(int i = 1; i <= 9; i ++){
        for(int j = 1; j <= 9; j ++){
            printf("%d ", i*j);
            // %2d：最小フィールド幅，printf関数において画面に出力させる幅を指定
            // 数字を綺麗に整えられる
        }
        printf("\n");
    }
    return 0;
}