#include <iostream>
using namespace std;
int main()
{
    int pilihan, tahun;
    cout<< " \nProram Tahun kabisat "<<endl;
    program :
    cout<< " 1.Menentukan Tahun Kabisat "<<endl;
    cout<< " \nmasukkan kodenya : ";
    cin>> pilihan;
    if(pilihan!= 1)
        {cout<< " Tolong masukkan angka 1 " <<endl;
    goto program;}
    cout<< " \nDapat dikatakan Tahun Kabisat, Jika : ";
    cout<< " Tahun habis jika dibagi 4 "<<endl;
    cout<< " bukan Tahun yang habis jika dibagi 100 "<<endl;
    cout<< " Tahun tidak habis dibagi 400 "<<endl;
    cout<< " \nMasukkan Tahun : ";
    cin>>tahun;
    switch(pilihan)
    {
case 1:
    if(tahun%400 == 0)
{
cout<< " \n Tahun " << tahun << " adalah Tahun kabisat " <<endl;
    break;
}
    case 2:
    if(tahun%400 > 0 && tahun%100 == 0)
    {
    cout<< " \n Tahun " << tahun << " bukan Tahun kabisat ";
        break;
    }
    case 3:
    if(tahun%400 > 0 && tahun%100 > 0)
        {
        cout<< " \n Tahun " << tahun << " adalah Tahun Kabisat ";
    break;
        }
case 4:
if(tahun%4 > 0 && tahun%100 > 0 && tahun%400 > 0)
    {
    cout<< " \n Tahun " << tahun << " bukan Tahun Kabisat ";
    break;
    }
    return 0;
    }
}
