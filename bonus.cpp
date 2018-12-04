#include <iostream>
using namespace std;
int main()
{
int pilihan, harga, jumlah, total_pembelian;
    char a[30];
    cout<< " \nTOSERBA\n "<<endl;
    cout<< " PROMO DAN BONUS " <<endl;
    cout<< " \nInput 1. untuk promo bonus "<<endl;
    cout<< " \nInput 2. untuk pembelian normal "<<endl;
    cout<< " \nMasukkan pilihan anda : ";
    cin>>pilihan;
        cout<<" \nBarang yang anda beli : ";
        cin>>a;
        cout<< " \nHarga Barang : ";
        cin>>harga;
        cout<<" \nJumlah Barang : ";
        cin>>jumlah;
        total_pembelian = harga * jumlah;
        cout<<" \nTotal Pembelian Anda : " << total_pembelian << endl;
        cout<<" \n\n " << endl;
        switch(pilihan)
        {
        case 1:
        {
        if(total_pembelian >= 500000 && jumlah > 5)
        cout<<" \n Anda mendapatkan bonus : SETRIKA\n ";
    break;
        }
if(total_pembelian >= 100000 && jumlah < 3)
               {
            cout<<" \n Anda mendapatkan bonus : PAYUNG\n ";
            break;}
            if(total_pembelian >=50000 && jumlah >2)
            {
            cout<<" \n Anda mendapatkan bonus : BALLPOINT\n ";
            break;
        }
        else
        {
            cout<<" \n Anda tidak mendapatkan bonus\n ";
            break;
        }
        case 2:
          { cout<<" \n Terimakasih \n ";
            break; }
        default:
cout<<" \npilihan anda salah! " <<endl;
        }
 cin.get();
        return 0;
}
