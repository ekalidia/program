#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

using namespace std;
int main()
{

int x,jmlh_anak;
 cout<<" Masukan jumlah bola dalam keranjang : ";
cin>> jmlh_anak;
    cout<<"Mari Kita ambil bola sambil berhitung mulai dari "<<jmlh_anak<<endl;
    cout<<"Mulai Berhitung !"<<endl;

    for (x=jmlh_anak;x>0;x--)
{
    if (x>1)
        cout<<" Jumlah bola ada "<<x<<" diambil satu tinggal " <<x-1<<endl;
        else if (x=1)
            cout<<" Jumlah bola ada 1 diambil satu tinggal keranjangnya "<<endl;
}
getch ;
return 0;

}
