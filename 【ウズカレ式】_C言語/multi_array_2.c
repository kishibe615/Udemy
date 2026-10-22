#include <stdio.h>
int main(void) {
    int students[3][4]={
        {1,78,92,65},
        {2,81,89,72},
        {3,69,85,70}
    };
    for(int i=0;i<3;i++){
        printf("%d番さんの平均点は",i+1);
        int sum=0;
        for(int j=1;j<4;j++){
            sum+=students[i][j];
        }
        float average = (float)sum / 3;
        printf("%.1f点\n", average);
    }
    return 0;
}   