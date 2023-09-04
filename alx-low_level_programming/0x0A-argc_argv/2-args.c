#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: count arguments
 * @argv: arguments
 *
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{

	/*Decrlaring variables*/
	int count = 0;

	if (argc > 0)
	{
		/*WHILE - Print each argument*/
		while (count < argc)
		{
			printf("%s\n", argv[count]);
			count++;
		}
	}
	return (0);
}
