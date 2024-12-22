#include <stdio.h>
int main(){
    int month, day;
    printf("Mời nhập ngày: ");
    scanf("%d", &day);
    if (day<0 || day >31){
        printf("Ngày không hợp lệ!");
    }
    printf ("Mời nhập vào tháng: ");
    scanf("%d", &month);
    if (month < 0 || month >12){
        printf("Tháng bạn vừa nhập không hợp lệ\n");}
        switch (month){
            case 1:
            if (day >=1 && day<=19){
                printf("Cung Ma Kết");
            }
            else if (day>=20 && day<=31){
                printf("Cung Bảo Bình");
            }
            break;
            case 2:
            if (day >=1 && day <= 18){
                printf("Cung Bảo Bình");
            }
            else if(day >=19 && day<=29){
                printf("Cung Song Ngư");
            }
            break;
            case 3:
            if (day>=1 && day<=20){
                printf("Cung Song Ngư");
            }
            else if(day>=21 && day<=31){
                printf("Cung Bạch Dương");
            }
            break;
            case 4:
            if (day>=1 && day<=20){
                printf("Cung Bạch Dương");
            }
            else if(day>=21 && day<=30){
                printf("Cung Kim Ngưu");
            }
            break;
            case 5:
            if (day>=1 && day<=20){
                printf("Cung Kim Ngưu");
            }
            else if(day>=21 && day<=31){
                printf("Cung Song Tử");
            }
            break;
            case 6:
            if (day>=1 && day<=21){
                printf("Cung Song Tử");
            }
            else if(day>=22 && day<=30){
                printf("Cung Cự Giải");
            }
            break;
            case 7:
            if (day>=1 && day<=22){
                printf("Cung Cự Giải");
            }
            else if(day>=23 && day<=31){
                printf("Cung Sư Tử");
            }
            break;
            case 8:
            if (day>=1 && day<=22){
                printf("Cung Sư Tử");
            }
            else if (day>=23 && day<=31){
                printf("Cung Xử Nữ");
            }
            break;
            case 9:
            if (day >=1 && day<=23){
                printf("Cung Xử Nữ");
            }
            else if(day>=24 && day<=30){
                printf("Cung Thiên Bình");
            }
            break;
            case 10:
            if (day>=1 && day<=23){
                printf("Cung Thiên Bình");
            }
            else if (day>=24 && day<=31){
                printf("Cung Bọ Cạp");
            }
            break;
            case 11:
            if (day>=1 && day<=22){
                printf("Cung Bọ Cạp");
            }
            else if(day >=23 && day<=30){
                printf("Cung Nhân Mã");
            }
            break;
            case 12:
            if (day >=1 && day<=21){
                printf("Cung Nhân Mã");
            }
            else if (day>=22 && day<=31){
                printf("Cung Ma Kết");
            }
            break;
            default: printf("Tháng nhập không hợp lệ");
            
        }
        return 0;

}