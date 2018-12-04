#include <stdio.h>


void pecahan();
main()
{
    pecahan();
}
void pecahan()
{
    int a,b,l,t;
    printf("Masukkan pembilang :");
    scanf("%d",&a);
    printf("Masukkan penyebut :");
    scanf("%d",&b);
    t = a/b;
    l = a%b;
    if(a%b == 0)
        printf("Bilangan (%d/%d) \ndi sederhanakan menjadi %d",a,b,t,l);
    else if(a%b != 0)
        printf("Bilangan (%d/%d) \ndi sederhanakan menjadi (%d %d/%d)",a,b,t,l,b);
}
