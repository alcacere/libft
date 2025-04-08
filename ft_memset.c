#include <stddef.h>
#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	value;
	unsigned int	i;

	ptr = s;
	value = (unsigned char)c;
	i = 0;
	while(i < n)
	{
		ptr[i] = value;
		i++;
	}
	return (s);
}
