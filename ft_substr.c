#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	s_len;

	s_len = ft_strlen(s);
	if (start >= s_len)
		return(NULL);
	if (start + len > s_len)
		len = s_len - start;
	ptr = (char *)malloc(len);
	if (ptr == NULL)
		return(NULL);
	ft_strlcpy(ptr, s + start, ft_strlen(ptr));
	return(ptr);
}
