#include <stdio.h>
int main(){
    int N, a=0, b=1, next;
    do
    {
       printf("Mời nhập vào 1 số nguyên dương:");
       scanf("%d", &N);
       if (N<0){
        printf("Xin hãy nhập số nguyên DƯƠNG!\n");
       }
    } while (N<0);
    printf("%d số fibonacci đầu tiên là: ", N);
    for(int i=1; i<=N; i++){
        printf("%d ", a);
        next =a+b;
        a = b;
        b=next;
    }
    return 0;

}