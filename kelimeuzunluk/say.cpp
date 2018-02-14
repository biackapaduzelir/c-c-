#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char kelime[500];
    cout<<"Kelime Girin:";
    cin>>kelime;
    int buyuk=0,kucuk=0,rakam=0,diger=0;
    int indis=0;
    while(kelime[indis])
    {
        int veri=kelime[indis];
        if(veri>47 && veri<58)
            rakam++;
        else
        {
            if(veri>64 && veri<91)
                buyuk++;
            else
            {
                if(veri>96 && veri<123)
                    kucuk++;
                else
                    diger++;
            }
        }
        indis++;
    }
    int toplam=strlen(kelime);
    cout<<"Toplam:"<<toplam<<" buyuk:"<<buyuk<<
    " kucuk:"<<kucuk<<" rakam:"<<rakam<<" diger:"
    <<diger<<endl;
    return 0;
}
