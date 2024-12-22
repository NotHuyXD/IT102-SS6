#include <stdio.h>
int main(){
    int month, year;
    printf("Mời nhập năm:");
    scanf("%d", &year);
    if (year<0){
        printf("Năm không hợp lệ!");
    }
    printf ("Mời nhập vào tháng: ");
    scanf("%d", &month);
    if (month < 0 || month >12){
        printf("Tháng bạn vừa nhập không hợp lệ\n");}
        switch(month){
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
            printf("Tháng %d năm %d có 31 ngày", month, year);
            break;
            case 4:
            case 6:
            case 9:
            case 11:
            printf("Tháng %d năm %d có 30 ngày", month, year);
            break;
            case 2:
            if ((year % 4 == 0 && year % 100 !=0) || (year %400 == 0)){
                printf("Tháng 2 năm %d có 29 ngày", year);

            }
            else {
                printf("Tháng 2 năm %d có 28 ngày", year);
            }
            
        }
        return 0;
}

    