#include <iostream>

using namespace std;

int main()
{

    double tuketim;
    cout<<"Miktari girin:";
    cin>>tuketim;

    double kw_tl= 0.21569612*tuketim;
    double dagitim_tl=0.11613051*tuketim;
    double toplam = (kw_tl+dagitim_tl)*1.18;

    cout<<"TL: "<<toplam<<endl;

    return 0;
}
