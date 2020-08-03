#include <stdio.h>
#include "ft_div_mod.c"
void ft_div_mod(int, int, int*, int*);
int main()
{   
    int a = 20;
    int b = 10;
    int result_div;
    int result_mod;

    ft_div_mod(a,b,&result_div,&result_mod);
    printf("%d,%d",result_div, result_mod);
}