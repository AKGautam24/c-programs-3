#include<stdio.h>
#include<conio.h>
int main() {
    int  customerid, unit ;
    float total ;
    char cg[20];
    printf("name:  ");
    scanf("%s", &cg);

    printf("customerid:");
    scanf("%d", &customerid);

    printf("unit:");
    scanf("%d", &unit);

    if(unit<=190)
    total = unit*1.20;
    else if  (200<=unit<400)
    total =unit*1.50;
    else if  (400<=unit<600)
    total =unit*1.80;
    else if (unit >=600)
    total =unit*2.00;

    printf("total = %.2f \n ", total);

     


    }
