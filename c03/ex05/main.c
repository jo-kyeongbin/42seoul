#include <stdio.h>
#include <string.h>
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
int main(){
char a[20] = "hellow ";
char b[20] = "world!";
char c[20] = "hellow ";
char d[20] = "world!";
printf("%s %lu\n",a,strlcat(a,b,11));
printf("%s %u\n",c,ft_strlcat(c,d,11));
}