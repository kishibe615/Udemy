#include <stdio.h>
int main(void) {
    char letterA = 'A', letterB = 'B', letterC ='C';
    printf("%c%c%c\n", letterA,letterB,letterC);
    short giraffe = 500;
    printf("キリンの身長は%dcm\n",giraffe);
    float route = 1.41;
    printf("ルート2は%.2f\n", route);
    double budget = 110000000000000;
    printf("日本の国庫予算は約%.0f\n", budget);
	return 0;
}