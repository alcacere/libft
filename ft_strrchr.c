#include "libft.h"
char	*ft_strrchr(const char *s, int c)
{
	const char	*ptr;

	ptr = s + ft_strlen(s);
	while(ptr >= s)
	{
		if(*ptr == c)
			return((char *)ptr);
		ptr--;
	}
	return(NULL);
}
