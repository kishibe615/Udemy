#include <stdio.h>
int add100(int num){
    int response = num + 100;
    return response;
}
int main(void){
    int result = add100(5);
    //戻り値responseを，変数resultに代入している
    printf("add100関数の戻り値は%d\n", result);
}