#include <iostream>
using namespace std;
int main()
{
    int s1,s2,s3, pilihan;
    cout<< " \nProram Segitiga\n " <<endl;
    cout<< " Masukkan sisi pertama : ";
    cin>>s1;
    cout<< " Masukkan sisi kedua : ";
    cin>> s2;
    cout<< " Masukkan sisi ketiga : ";
    cin>> s3;
    cout<< " Termasuk segitiga apakah seperti ini ? " <<endl;
    pilih:
        cout<< " Masukkan pilihan anda : ";
        cin>> pilihan;
        switch(pilihan)
        {
    case 1:
        cout<< " \nSEGITIGA SAMA SISI " <<endl;
        break;

    case 2:
        cout<< " \nSEGITIGA SAMA KAKI " <<endl;
        break;
    case 3:
        cout<< " \nSEGITIGA SEMBARANG " <<endl;
        break;

    default:
        cout<< " \npilihan anda salah! " <<endl;
        goto pilih;
        }

        cin.get();
        return 0;


}
