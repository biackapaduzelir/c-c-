#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(){
 int asalsayi=0,sayac=0;
 scanf("%d",&asalsayi);

    int i=0;
 for(i=2;i<asalsayi;i++){
    if(asalsayi%i==0)
    {
        sayac++;
    }
    }
    if(sayac==0)
        printf ("sayi asaldir");
    else
        printf("sayi asal degildir");

    return 0;
 }

