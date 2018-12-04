#include <iostream>
using namespace std;
int main()
{
    float volume, luas, jari_jari, tinggi;
    cout<< "Masukkan jari_jari :";
    cin>>jari_jari;
    cout<< "Masukkan tinggi :";
    cin>>tinggi;
    volume=3.14*jari_jari*jari_jari*tinggi;
    luas=2*3.14*jari_jari*tinggi;
    cout<< "volume tabung :"<<volume<<endl;
    cout<< "luas tabung :"<<luas<<endl;
    return 0;

}
