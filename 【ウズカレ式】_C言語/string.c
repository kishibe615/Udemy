#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void){
    char str[21];
    puts("パスワードを入力してください");
    fgets(str, sizeof(str), stdin);
    char len = strlen(str);
    int length = 0;
    // if(len >= 8 && len <= 20){
    // 入力したパスワードの改行(\n)を除外するために+1とする
    if(len >= 9 && len <= 21){
        length = 1;
    }else{
        length = 0;
    }
    int i=0;
    int has_upper = 0;
    int has_lower = 0;
    int has_digit = 0;
    int has_punct = 0;
    while(str[i]){
        if(isupper(str[i])){
            has_upper = 1;
        }
        if(islower(str[i])){
            has_lower = 1;
        }
        if(isdigit(str[i])){
            has_digit = 1;
        }
        if(ispunct(str[i])){
            has_punct = 1;
        }
        i++;
    }
    if(length && has_upper && has_lower && has_digit && has_punct){
        puts("パスワードは合格です");
    }else{
        puts("パスワードは条件を満たしていません");
    }
    return 0;
}