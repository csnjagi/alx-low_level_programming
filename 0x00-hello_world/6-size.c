#include<stdio.h>
/**
* main - Program that prints the size of various computer types
* Return: 0 (Success)
*/
int main(void)
{
	char c;
	int i;
	long int l;
	long long int m;
	float f;

printf("Size of char: %d byte(s)\n", sizeof(c));
printf("Size of int: %d byte(s)\n", sizeof(i));
printf("Size of long int: %d byte(s)\n", sizeof(l));
printf("Size of long long int: %d byte(s)\n", sizeof(m));
printf("Size of float: %d byte(s)\n", sizeof(f));
return (0);
}

