#include <stdlib.h>
#include <stdio.h>
int powers(int a, int b);


int main()
{
    powers(4,2);
    return 0;
}

int powers(int a, int b)
{
    int i,pow;
    pow =1;
    for(i = 0; i < b; i++)
    {
        pow = pow * a;
    }
    printf("%d",pow);
}