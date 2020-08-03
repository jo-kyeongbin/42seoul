#include <unistd.h>
#include <stdio.h>

void    number_abs(int* a, char* minus)
{
    if (*a < 0)
    {
        *a = -(*a);
        minus[10] = '-';
    }
}

int    size(int n)
{
    int key = 1000000000;
    
    if (n / 1000000000 != 0)
        return key;
    else if(n / 100000000 != 0)
        return (key/10);
    else if(n / 10000000 != 0)
        return (key/100);
    else if(n / 1000000 != 0)
        return (key/1000);
    else if(n / 100000 != 0)
        return (key/10000);
    else if(n / 10000 != 0)
        return (key/100000);
    else if(n / 1000 != 0)
        return (key/1000000);
    else if(n / 100 != 0)
        return (key/10000000);
    else if(n / 10 != 0)
        return (key/100000000);
    else
        return (key/10000000000);
}

int    bit_number(int n, int key, char* number_bit)
{
    int temp;
    int p;

    p = 0;
    while(key != 1)
    {
        temp = n / key;
        number_bit[p++] = temp + 48;
        n = n % key;
        key = key / 10;
    }
    number_bit[p] = n + 48;
    return (p+1);
}

void    ft_putnbr(int nb)
{
    char number[12];
    int key;
    int i;
    if (nb == -2147483648)
    {   
        write(1,"-2147483648",11);
    }
    else
    {
        number_abs(&nb, number);
        if (number[10] == '-')
            write(1, &number[10],1);
        key = size(nb);
        key = bit_number(nb, key, number);
        write(1, number, key);
    }
}