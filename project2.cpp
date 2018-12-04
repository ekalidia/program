#include <iostream>
using namespace std;
int jumlah()
{
    int a, b;
    cout<< " PENJUMLAHAN "<<endl;
    cout<< " Masukkan Angka 1 : ";
    cin>> a;
    cout<< " Masukkan Angka 2 : ";
    cin>> b;
    cout<< " Hasil : "<<a + b<<endl;
    cout<<endl;
}
int kurang()
{

int a, b;
cout<< " PENGURANGAN "<<endl;
cout<< " Masukkan Angka 1 : ";
cin>> a;
cout<< " Masukkan Angka 2 : ";
cin>> b;
cout<< " Hasil : "<<a - b<<endl;
cout<<endl;
}
int kali()
{
    int a, b;
    cout<< " PERKALIAN "<<endl;
    cout<< " Masukkan Angka 1 : ";
    cin>> a;
    cout<< " Masukkan Angka 2 : ";
    cin>> b;
    cout<< " Hasil : "<<a * b<<endl;
    cout<<endl;
}
int bagi()
{
    int a, b;
    cout<< " PEMBAGIAN "<<endl;
    cout<< " Masukkan Angka 1 : ";
    cin>> a;
    cout<< " Masukkan Angka 2 : ";
    cin>> b;
    cout<< " Hasil : "<<a / b<<endl;
    cout<<endl;
}
int main()
{
    cout<< " OPERASI KALKULATOR SEDERHANA "<<endl;
    cout<<endl;
    jumlah();
    kurang();
    kali();
    bagi();
    cout<<endl;
    return 0;
}
