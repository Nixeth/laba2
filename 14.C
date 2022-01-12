// 14. Написать программу, вычисляющую стоимость междугороднего разговора в соответствии с таблицей:
#include <stdio.h>
int main(){
    int code, minutes;
    scanf("%d %d", &code, &minutes);
    switch (code){
        case 432:
            printf("Стоимость разговора 9,20 руб/мин: %.2f", 9.2 * minutes);
        break;
        case 95:
            printf("Стоимость разговора 4,10 руб/мин: %.2f", 4.1 * minutes);
        break;
            case 861:
        printf("Стоимость разговора 2,05 руб/мин: %.2f", 2.05 * minutes);
            break;
        case 844:
            printf("Стоимость разговора 2,5 руб/мин: %.2f", 2.5 * minutes);
        break;
        default:
            printf("Неправильный код города");
        break;
    }
}
