	#include "main.h"
/**
 * main - Print alphabet
 *
 * Description: 'Print alphbet in lowercase 10 times'
 *
 * Return: Always 0 (Success)
 */

	void print_alphabet_x10(void)
	{
		char ch;
		int i;


		i = 0;


		while (i < 10)
		{
			ch = 'a';
			while (ch <= 'z')
			{
				_putchar(ch);
				ch++;
			}
			_putchar('\n');
			i++;
		}
	}

