#include "libft.h"
char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	s2_len;

	s2_len = ft_strlen(s2);
	i = 0;
	while(i <= n - s2_len)
	{
		if(ft_strncmp(s1 + i, s2, s2_len) == 0)
			return((char *) (s1 + i));
		i++;
	}
	return(NULL);
}
