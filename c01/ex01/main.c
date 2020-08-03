#include "ft_ultimate_ft.c"
#include <stdio.h>

int     main()
{
    int x = 0;
    int *p0 = &x;
    int **p1 = &p0;
    int ***p2 = &p1;
    int ****p3 = &p2;
    int *****p4 = &p3;
    int ******p5 = &p4;
    int *******p6 = &p5;
    int ********p7 = &p6;
    int *********p8 = &p7;

    ft_ultimate_ft(p8);
    printf("%d",x);
}