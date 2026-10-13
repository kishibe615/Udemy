#include <stdio.h>
int main(void) {
    char letterA = "A", letterB = "B", letterC ="C";
    printf("\c\c\c\n", letterA,letterB,letterC);
    short giraffe = 500;
    printf("キリンの身長は\dcm\n",giraffe);
    float route = 1.41;
    printf("ルート\.2fは\f\n", route, route);
    double budget = 110000000000000
    printf("日本の国庫予算は約\d\n", budget);
	return 0;
}