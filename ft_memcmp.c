#include "libft.h"
#include <stddef.h>
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*ptr_s1;
	char	*ptr_s2;	
	size_t	i;

	ptr_s1 = (char *)s1;
	ptr_s2 = (char *)s2;
	i = 0;
	while(i < n)
	{
		if(ptr_s1[i] != ptr_s2[i])
			return(ptr_s1[i] - ptr_s2[i]);
		i++;
	}
	return(0);
}

