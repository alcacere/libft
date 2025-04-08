#include <stddef.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const char *src, size_t n)
{
	char *ptr_dest;
	size_t i;

	ptr_dest = (char *)dest;
	i = 0;
	while(i < n)
	{
		ptr_dest[i] = src[i];
		i++;
	}
	return (dest);
}
