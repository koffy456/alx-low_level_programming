#include "main.h"

void print_alphabet_x10(void){
	char i;
	char h;

	for (h = 0; h <= 9; h++)
	{
		for (i = 'a'; i<= 'z'; i++)
		{
			_puthar(i);
		}
		_putchar('\n');
	}
}

