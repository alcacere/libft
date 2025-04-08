#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void *ptr;

	ptr = malloc(num * size);
	if (ptr == NULL)
		return(NULL);
	ft_bzero(ptr, num);
	return(ptr);
}

