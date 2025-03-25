#include <stdio.h>
#include "libft.h"

int main(void)
{
	int c = 'a';
	int d = '4';
	int result3 = ft_isalnum(c);
	int result = ft_isalpha(c);
	int result2 = ft_isdigit(d);
	int result4 = ft_isascii(c);
	printf("%i\n", result);
	printf("%i\n", result2);
	printf("%i\n", result3);
	printf("%i\n", result4);
}
