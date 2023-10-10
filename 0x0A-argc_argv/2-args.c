#include<stdio.h>
#include"main.h"
/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
*/
int x;

int main(int argc, char *argv[])
{	for(x=0 ; x < argc ; x++)
	{
	printf("%s \n", argv[x]);
	}
return 0;
}
