#include <iostream>
using namespace std;
int main ()
{
   double jam, detik, menit, total;
    cout<< "Masukkan Jam:";
    cin>> jam;
    cout<< "Masukkan Menit:";
    cin>> menit;
    cout<< "Masukkan Detik:";
    cin>> detik;
    total = jam * 3600 + menit * 60 + detik;
    cout<< "Maka Total detiknya adalah :" << total;

return 0;

}
