#include <stdio.h>
#include "main.h"

/**
 * main - affiche  all arguments it receives
 * @argc: is the number of arguments
 * @argv: is the array of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
