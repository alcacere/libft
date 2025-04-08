#include <stddef.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dest_ptr;
	const char *src_ptr;
	size_t	i;

	dest_ptr = (char *)dest;
	src_ptr = (const char *)src;
	i = 0;
	if (dest_ptr < src_ptr)
	{
		while (i < n)
		{
			dest_ptr[i] = src_ptr[i];
			i++;
		}
	}
	else if (dest_ptr > src_ptr)
	{
		i = n;
		while(i > 0)
		{
			dest_ptr[i - 1] = src_ptr[i - 1];
			i--;
		}
	}
	return(dest);
}

