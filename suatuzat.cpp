#include <conio.h>
#include <iostream>
#include <stdio.h>
using namespace std;
main()
{
    char*wujud_air,lagi;
  int suhu;
    cout<< " Program Identifikasi Suatu Zat "<<endl;
    cout<< " Mengetahui Suatu Zat Beku atau Tidak "<<endl;
    cout<< "\n\n";
    atas:
    cout<< " Jika Suhu Adalah ";
    cin>>suhu;

 if(suhu<=0)
    {
    wujud_air= "beku";
    }
   if(0<suhu<100)
    {
    wujud_air= "cair";
    }
    else if(suhu>=100)
    {
    wujud_air= "uap";
    }
    cout<< " \nMaka Wujud air adalah "<<wujud_air;
    cout<< " \n ";
    cout<< " \nInput lagi [Y|T] ? ";
    cin>>lagi;
    cout<< " \n\n ";

   if (lagi=='Y'||lagi=='y')
    goto atas;

getche();

}
