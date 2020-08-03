#include "ft_swap.c"
#include <stdio.h>

int main()
{   
    int a =10;
    int b =20;
    ft_swap(&a,&b);
    printf("%d, %d\n",a,b);
}