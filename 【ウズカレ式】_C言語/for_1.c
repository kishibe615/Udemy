/*#include <stdio.h>
int main(void) {
    for(int num = 2; num <= 18; num += 2){
        printf("%d\t", num);
    }
    return 0;
}*/

#include <stdio.h>
int main(void) {
    for(int num = 1; num <= 9; num ++){
        printf("%d\t", 2*num);
// \tは水平タブを挿入
// 算術演算子を活用(2*num)
    }
    return 0;
}