#include <stdio.h>
#include <conio.h>
int main()
{
    int x = 1, i;
    for(i=0; i<20; i++)
    {
        printf( " %d, ", x);
        x = x + 2;
    }
    getch();
}
