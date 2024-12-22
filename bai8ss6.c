#include <stdio.h>
int main(){
    int money, lai, month;
    float tienlai, tong;
    printf("Hãy nhập số tiền muốn gửi: ");
    scanf("%d", &money);
    printf("Nhập lãi : ");
    scanf("%d", &lai);
    printf("Nhập số tháng gửi: ");
    scanf("%d", &month);
    tienlai=(money*(lai/100))*month;
    tong=money+tienlai;
    return 0;
}