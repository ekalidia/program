#include <iostream>
using namespace std;
int main()
{
int nilai;
cout<< " \nProgram Konversi Nilai\n " <<endl;
cout<< " \n\n ";
cout<< " Kode Nilai : " <<endl;
cout<< " 1. 80-100 " <<endl;
cout<< " 2. 65-79 " <<endl;
cout<< " 3. 50-64 " <<endl;
cout<< " 4. 35-49 " <<endl;
cout<< " 5. 0-34 " <<endl;
kode:
cout<< " \nmasukkan kode dari nilai anda : ";
cin>> nilai;
switch(nilai)
{
case 1:
    cout<< " Nilai Anda : A " <<endl;
    break;
case 2:
    cout<< " Nilai Anda : B " <<endl;
    break;
case 3:
    cout<< " Nilai Anda : C " <<endl;
    break;
case 4:
    cout<< " NIlai Anda : D " <<endl;
    break;
case 5 :
    cout<< " Nilai Anda : E " <<endl;
    break;
default:
    cout<< " \nKode yang anda masukkan salah!\n " <<endl;
    goto kode;

}
cin.get();
return 0;
}
