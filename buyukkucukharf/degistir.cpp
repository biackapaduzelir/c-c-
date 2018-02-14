#include <iostream>

using namespace std;
int main()
{
    char kelime[100];
    cout<<"Harfleri buyuk harflere donustur"<<endl;
    cout<<"Kelimeyi Girin:";
    cin>>kelime;
    int indis=0;
    while(kelime[indis])
    {
        int deger = kelime[indis];
        if(deger>96 && deger<123)
            kelime[indis]-=32;
        cout<<kelime[indis];
        indis++;
    }
    return 0;
}
