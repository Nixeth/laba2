9. Определить, есть ли среди цифр заданного целого трёхзначного числа одинаковые.
#include <stdio.h>
int main()
{
    int x,c,k1,k2,k3;
    scanf("%d", &x);
    k1=x/100;
    k2=(x/10)%10;
    k3=x%10;  
    if (k1==k2){
        printf("одинаковые числа=%d и %d",k2,k3);
    }
    if (k1==k3){
        printf("одинаковые числа=%d и %d",k2,k3);
    }
    if (k2==k3){
        printf("одинаковые числа=%d и %d",k2,k3);
    }
    if (k1==k2==k3){
        printf("все числа одинаковые %d %d %d",k1,k2,k3);
    }
    if ((k1!=k2) && (k2!=k3) && (k3!=k1)){
        printf("нет одинаковых");
    }
    return 0;
}
