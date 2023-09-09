#include <unistd.h>

/**
 * main - it is the entry point
 *
 * Return: it is the exit point, always 1
*/

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
