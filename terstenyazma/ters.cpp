#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char kelime[500];

    cout<<"Kelime Girin:";
    cin>>kelime;

    int sayi=strlen(kelime);

    cout<<"Kelime:"<<kelime<<" Sayi:"<<sayi<<endl;

    cout<<"Kelimenin Tersi:";
    /*for(int i=0;i<sayi;i++)
    {
        int indis=sayi-i-1;
        cout<<kelime[indis];
    }*/

    for(int i=sayi-1;i>=0;i--)
        cout<<kelime[i];

    return 0;
}
