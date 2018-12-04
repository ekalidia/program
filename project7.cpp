#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
int main()
{
    float x, y;
    cout<< " Menentukan Posisi Suatu Titik "<<endl;
    cout<< " Pada Koordinat Celsius "<<endl;
    cout<<endl;
    cout<< " Masukkan nilai x : ";
    cin>> x;
    cout<<endl;
    cout<< " Masukkan nilai y : ";
    cin>> y ;
    cout<<endl;
    cout<< " Posisi Titik Berada di ";
    if(x>=0 && y>=0)
    {
        cout<< " Kuadran 1 "<<endl;
    }
    else if(x<0 && y>=0)
    {
        cout<< " Kuadran 2 "<<endl;
    }
    else if(x<0 && y<0)
    {
        cout<< " Kuadran 3 "<<endl;
    }
    else if(x>=0 && y<0)
    {
        cout<< " Kuadran 4 "<<endl;
    }
    getch();
}
