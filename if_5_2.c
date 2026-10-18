#include <stdio.h>
int main(void) {
    int ma = 35, ja = 61;
    if (40<=ma || 60 <= ja){
        if(40<=ma && 60 <= ja){
            printf("合格おめでとう！\n");
        }else{
            printf("再試験を受けてね！\n");
        }
    }else{
        printf("補習を受けてね! \n");

    }
    return 0;
}