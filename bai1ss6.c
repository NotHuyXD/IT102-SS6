#include <stdio.h>
int main(){
    int a, b, c, d, e, tong=0;
    printf("Mời nhập vào 5 số nguyên bất kỳ: ");
    scanf("%d", &a);
    if (a%2!=0){
        tong+=a;
    }
    scanf("%d", &b);
    if (b%2!=0){
        tong+=b;
    }
    scanf("%d", &c);
    if (c%2!=0){
        tong+=c;
    }
    scanf("%d", &d);
    if (d%2!=0){
        tong+=d;
    }
    scanf("%d", &e);
    if (e%2!=0){
        tong+=e;
    }
    return 0;

}