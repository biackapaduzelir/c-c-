#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main(void)
{
    int  toplam=0;
    int sayac=0;
    int ogrsay=0;
    int puan[50];
    //clrscr();
    printf("\nPuanlarin Hesaplanmasi\n");
    printf("\n==================\n");
    printf("Kac ogrencinin puani girilecek:",ogrsay+1);
    scanf("%d",&ogrsay);
    fflush(stdin);
    for(sayac=0;sayac<=ogrsay-1;sayac++){
        printf("%d. Ogrencinin puani:",sayac+1);
        scanf("%d",&puan[sayac]);
        fflush(stdin);
        toplam=toplam+puan[sayac];

    }
    printf("\n Ogrenci sayisi=%d",sayac);
    printf("\n Puan Toplami=%d",toplam);
    printf("\n Puan Ortalamasi= %.1f \n",(float)toplam/sayac);

    getch();


}
