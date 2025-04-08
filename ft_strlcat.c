#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	char *src_ptr = (char *)src;

	i = 0;
	while(dest[i] != '\0')
	{
		i++;
	}
	return(ft_strlcpy(&dest[i], src_ptr, size) + i);
}
