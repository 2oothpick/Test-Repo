#include <stdio.h>
#include <stdlib.h>
void sub(int a, int b);


int main()
{
    sub(9,4);
    printf("hello world");
    return 0;
}

void sub(int a, int b)
{
    int subb = a - b;
    printf("%d\n",subb);
}