#include <iostream>
using namespace std;
int main()
{
    cout<< " Program Menentukan Bilangan Terbesar "<<endl;
    cout<<endl;
    int bil1, bil2, bil3;
    cout<< " Masukkan bilangan 1 : ";
    cin>> bil1;
    cout<< " Masukkan bilangan 2 : ";
    cin>> bil2;
    cout<< " Masukkan bilangan 3 : ";
    cin>> bil3;
    if(bil1 > bil2)
    {
        cout<<bil1<< " Nilai Terkecil ";
        }

    else if(bil2 > bil3)
        {
            cout<<bil2<< " Nilai Terbesar ";
        }
        else{
            cout<<bil3<< " Nilai Terbesar ";
        }
        return 0;
    }
