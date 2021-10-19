#include <stdio.h>
#include <ctype.h>
/**
*main - Prints lowercase alphabets in reverse
*
*Return: returns 0
*/
int main(void)
{
	int i;

	for(i = 'z'; i >= 'a'; i--)
        {
          putchar(i);
	    }
          putchar('\n');
	return (0);
}
