#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int a = 5, i = 1;
    do
    {
        cout<< " \nNilai ke "<<i<< " = "<<a;
        a+=5;
        i++;
    }
    while(i<=10);
    getch();
}
