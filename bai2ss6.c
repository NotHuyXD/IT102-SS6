#include <stdio.h>
int main(){
    int a, b, c, d, e, count1=0, count2=0;
    printf("Mời nhập vào 5 số nguyên: ");
    scanf("%d", &a);
    if (a%2==0){
        count1+=1;
    }
    else {
        count2+=1;
    }
    scanf("%d", &b);
    if (b%2==0){
        count1+=1;
    }
    else {
        count2+=1;
    }
    scanf("%d", &c);
    if (c%2==0){
        count1+=1;
    }
    else {
        count2+=1;
    }
    scanf("%d", &d);
    if (d%2==0){
        count1+=1;
    }
    else {
        count2+=1;
    }
    scanf("%d", &e);
    if (e%2==0){
        count1+=1;
    }
    else {
        count2+=1;
    }
    printf("bạn vừa nhập %d số chẵn và %d số lẻ", count1, count2);
    return 0;
}