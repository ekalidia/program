#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    float x;
    cout<< " Program Konversi Nilai "<<endl;
    cout<<endl;
    cout<< " Masukkan nilai mahasiswa : ";
    cin>> x;
    if(x>=80 && x==100)
        cout<< " A ";
    else
        if(x>=65 && x<=79)
        cout<< " B ";
    else
        if(x>=55 && x<=64)
        cout<< " C ";
    else
        if(x>=40 && x<=54)
        cout<< " D ";
    else
        cout<< " E ";
    return 0;
}
