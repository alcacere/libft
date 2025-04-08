#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	total_len;
	char	*ptr;
	char	*tmp;

	total_len = ft_strlen(s1) + ft_strlen(s2) + 1;
	ptr = (char *)malloc(total_len);
	if (ptr == NULL)
		return( NULL);
	tmp = ptr;
	if(s1)
	{
		while(*s1)
			*ptr++ = *s1++;
	}
	if(s2)
	{
		while(*s2)
			*ptr++ = *s2++;
	}
	*ptr = '\0';
	return(tmp);
}
