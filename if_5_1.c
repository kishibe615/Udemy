#include <stdio.h>
int main(void) {
    int ma = 49, ja = 55;
    if (40<=ma && 60 <= ja ){
        printf("合格おめでとう! \n");
    }else{
        if (ma < 40 && ja < 60){
            printf("補習を受けてね! \n");
        }else{
            printf("再試験を受けてね! \n");
        }
    }
    return 0;
}