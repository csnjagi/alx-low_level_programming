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

printf("Size of char: %lu  byte(s)\n", (unsigned long)sizeof(c));
printf("Size of int: %lu  byte(s)\n", (unsigned long)sizeof(i));
printf("Size of long int: %lu  byte(s)\n", (unsigned long)sizeof(l));
printf("Size of long long int: %lu  byte(s)\n", (unsigned long)sizeof(m));
printf("Size of float: %lu  byte(s)\n", (unsigned long)sizeof(f));
return (0);
}

