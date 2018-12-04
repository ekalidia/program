#include <iostream>
using namespace std;
int main()
{
    int usia;
    cout<< " PROGRAM VALIDASI USIA " << endl;
    cout<< " Masukkan Usia : ";
    cin>> usia;
    if(usia>17)
    {
        cout<< " Kamu sudah bisa dianggap DEWASA " << endl;
    }
    else
    {
        cout<< " Kamu belum bisa dianggap DEWASA " << endl;
    }
    cout<<endl;
    return 0;
}
