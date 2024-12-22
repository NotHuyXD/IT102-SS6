#include <stdio.h>
int main(){
    int pass=2468, guess;
    printf("Hãy nhập mật khẩu gồm 4 chữ số: ");
    scanf("%d", &guess);
    if (guess==pass){
        printf("Mật khẩu chính xác!");
    }
    else {
        printf("Mật khẩu không chính xác");
    }
    return 0;
}