#include <stdio.h>
int main(void) {
    int students[3][4]={
        {1,40,42,42},
        {2,50,52,52},
        {3,60,62,62}
    };
    for(int i=0;i<3;i++){
        printf("%d番さんの得点：",i+1);
        for(int j=1;j<4;j++){
            printf("第%d科目%d点 ",j,students[i][j]);
        }
        printf("\n");
    }
    return 0;
}   