#include <stdio.h>
#include <conio.h>
main() {
int i, a, b, c, sayac=0;
for(i=100;i<=999;i++){
a = i/100; // y�zler basama��
b = (i%100)/10; // onlar basama��
c = i%10; // birler basama��
if(a!=b && a!=c && b!=c){
printf("%5d",i);
sayac++;
}
 }
 printf("\n\nBu kurala uygun %d sayi var" ,sayac);
 getche();
 }
