#include <stdio.h>
#include <ctype.h>
int main(void) {
    puts("大文字変換なら1を入力");
    puts("小文字変換なら2を入力");    
    int type;
    scanf("%d",&type);
    puts("20文字以内で文字列を入力");
    char str[21];
    scanf("%s",str);
    int i=0;
    while(str[i]){
    // 配列の最後にはnull文字が入るので，偽と判定される
        if(type==1){
            str[i] = toupper(str[i]);
        }else if(type==2){
            str[i] = tolower(str[i]);
        }
        i++;
    }
    printf("変換完了：%s\n", str);
    return 0;
}
    