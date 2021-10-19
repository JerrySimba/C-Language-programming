#include <stdio.h>
/**
 * main - print base sixteen numbers in lowercase
 *
 * Return: 0
 */
int main(void)
{
 int i;
 for(i = '1'; i <= '9'; i++)
    {
    putchar(i);
    }
  int c;
  for(c = 'a'; c <= 'f'; c++)
    {
    putchar(c);
    }
    
    putchar('\n');
return (0);
}
