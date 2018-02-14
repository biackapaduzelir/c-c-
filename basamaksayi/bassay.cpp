#include <iostream>

using namespace std;

int main()
{

    int sayi;
    cout<<"Bir Sayi Girin:";
    cin>>sayi;

    int toplam=0;
    int bassay;
    for(bassay=0;sayi>0;bassay++)
    {
        int birler = sayi%10; //mod10
        sayi-=birler;
        sayi/=10;
        toplam+=birler;
    }

    cout<<"Basamak Sayisi:"<<bassay<<endl;
    cout<<"Basamak Toplami:"<<toplam<<endl;


    return 0;
}
