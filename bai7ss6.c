#include <stdio.h>
int main(){
    int N;
    printf("Mời nhập vào 1 số nguyên bất kỳ: ");
    scanf("%d", &N);
    printf("Các ước của %d là:\n", N);
    for (int i=1; i<=N; i++){
        if (N%i==0){
            printf("%d ", i);
        }
    }
    return 0;
}