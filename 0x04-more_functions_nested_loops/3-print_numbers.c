#include "main.h"
/**
*print_numbers - prints 0 to 9 with new line
*only use _putchar
*Description: use _putchar twice and print value 0-9
*/
void print_numbers(void)
{
int y;
y = 0;
while (y < 10)
{
_putchar(y + '0');
y++;
}
_putchar('\n');
}
