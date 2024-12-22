#include <stdio.h>
#include <math.h>
int main(){
    int a, b, c, delta;
    printf("Mời nhập 3 số a,b,c để giải phương trình bậc 2:");
    scanf("%d %d %d", &a, &b, &c);
    delta = b*b-4*a*c;
    if(delta =0){
        printf("Phương trình có nghiệm kép x1=x2= %d", -b/a);
    }
    else if(delta >0){
        printf("Phương trình có 2 nghiệm x1= %d, x2= %d", (-b+sqrt(delta))/2*a, (-b-sqrt(delta))/2*a);
    }
    else {
        printf("Phương trình vô nghiệm");
    }
    return 0;
}