#include <iostream>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
using namespace std;

int main()
{
    string menu[100],nama,makanan,minuman,kode[100];
    long int harga[100],jumlah[100],total[100],total_b,jumlahb[100];
    int data;
    float diskon[100],ppn[100];
    system("color 3");
    cout<<"=============================================="<<endl;
    cout<<"       PROGRAM KASIR SEDERHANA                "<<endl;
    cout<<"               Kantin PELITA BANGSA           "<<endl;
    cout<<"----------------------------------------------"<<endl;
    cout<<"  MENU MAKANAN :                              "<<endl;
    cout<<" 1 = Nasi Goreng                  Rp.10000,-  "<<endl;
    cout<<" 2 = Bakso                        Rp.12000,-  "<<endl;
    cout<<" 3 = Mie Ayam                     RP. 9000,-  "<<endl;
    cout<<" 4 =  Jus Alpukat                 Rp. 8000,-  "<<endl;
    cout<<" 5 =  Jus Mangga                  Rp. 7000,-  "<<endl;
    cout<<" 6 =  Cappucino                   Rp. 5000,-  "<<endl;
cout<<" Masukkan Nama Pemesan  : ";
cin>> nama;
cout<<" Menu Makanan           : ";
cin>> makanan;
cout<<" Menu Minuman           : ";
cin>> minuman;
cout<<" Masukkan Jumlah Data   : ";
cin>> data;
for (int i=1; i<=data; i++)
{
    cout<<"Masukkan Kode Makanan / Minuman : ";
    cin>> kode[i];
    if (kode[i] =="1")
    {
        menu[i] ="Nasi Goreng";
        harga[i] = 10000;
    }
    else if (kode[i] =="2")
    {
        menu[i] ="Bakso";
        harga[i] = 12000;

    }
    else if (kode[i] =="3")
    {
        menu[i] ="Mie Ayam";
        harga[i] = 9000;
    }
    else if (kode[i] =="4")
    {
        menu[i] ="Jus Alpukat";
        harga[i] = 8000;
    }
    else if (kode[i] =="5")
    {
        menu[i] ="Jus Mangga";
        harga[i] = 7000;
    }
    else if (kode[i] =="6")
    {
        menu[i] ="Cappucino";
        harga[i] = 5000;
    }

    cout<<" Nama Menu    : "<< menu[i] <<endl;
    cout<<" Harga Menu   : "<< harga[i] <<endl;
    cout<<" Masukkan Jumlah Beli : ";
    cin>> jumlah[i];
    total[i] = harga[i] * jumlah[i];
    cout <<" Total         : "<< total[i] <<endl;
    if (jumlah[i] >10)
    {
        diskon[i] = 0.1 * total[i];
    }
    else { diskon[i] = 0; }
    cout<<" Diskon       : "<< diskon[i] <<endl;
    ppn[i] = 0.1 * total[i];
    cout<<" PPN          : "<< ppn[i] <<endl;
    jumlahb[i] = total[i] - diskon[i] + ppn[i]; }
    system("cls");

    cout<<" "<<endl;

    total_b=0;
    for ( int j=1; j<=data; j++)
    {
        cout<<"-----BUKTI PEMESANAN--------"<<endl;
        cout<<"---Kantin PELITA BANGSA-----"<<endl;
        cout<<"****************************"<<endl;
        cout<<"NO             : "<< j;
        cout<<" "<<endl;
        cout<<" Nama Pemesan :   "<< nama;
        cout<<" "<<endl;
        cout<<" Menu Makanan :  "<< makanan;
        cout<<" "<<endl;
        cout<<" Kode Makanan :  "<< kode[j];
        cout<<" "<<endl;
        cout<<" Menu Minuman : "<< menu[j];
        cout<<" "<<endl;
        cout<<" Harga        : "<< harga[j];
        cout<<" "<<endl;
        cout<<" Total        : "<< total[j];
        cout<<" "<<endl;
        cout<<" Diskon       : "<< diskon[j];
        cout<<" "<<endl;
        cout<<" PPN          : "<< ppn[j];
        cout<<" "<<endl;
        cout<<" Jumlah Bayar : "<< " Rp. " << jumlahb[j];
        cout<<" "<<endl;
        total_b= total_b + jumlahb[j];
    }
    cout<<" Total  : Rp. "<< total_b <<endl;
    return 0;



}

