#include<stdio.h>
/**
 * main - this program displays the sizes of data types
 * Return: 0(Success)
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float e;
printf("Size of a char:%2d byte(s)", sizeof(a));
printf("Size of an int:%2d byte(s)", sizeof(b));
printf("Size of a long int:%2d byte(s)", sizeof(c));
printf("Size of a long long int:%2d byte(s)", sizeof(d));
printf("Size of a float:%2d byte(s)", sizeof(e));
return (0);
}
