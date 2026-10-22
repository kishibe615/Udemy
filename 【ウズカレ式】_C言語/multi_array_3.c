#include <stdio.h>
int main(void) {
    int students[3][3]={
        {78,92,65},
        {81,89,72},
        {69,85,70}
    };
    int sum[3] = {0};
    //sum[3] = {0,0,0}でも可
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            sum[j] += students[i][j];
        }
    }
    for(int k=0; k<3; k++){
        float ave = (float)sum[k] / 3;
        printf("第%d科目の平均点は%.1f点\n", k+1, ave);
    }
    return 0;
}   