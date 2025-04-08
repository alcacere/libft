#include "libft.h"
#include <stdio.h>
int	is_in_set(char c, const char *set)
{
	while(*set)
	{
		if (c == *set)
			return(1);
		set++;
	}
	return(0);
}
char	*strncpy(char *dest, const char *src, size_t n)
{
	size_t i;

	i = 0;
	while(i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return(dest);
}
char *ft_strtrim(const char *s1, const char *set)
{
	char *ptr;
	size_t first;
	size_t last;
	size_t len;

	first = 0;
	while(s1[first] && is_in_set(s1[first], set))
		first++;
	last = ft_strlen(s1);
	while(last > first && is_in_set(s1[last - 1], set))
		last--;
	len = last - first;
	ptr = (char *)malloc(len + 1);
	if(ptr == NULL)
		return(NULL);
	strncpy(ptr, s1 + first, len);
	ptr[len] = '\0';
	return (ptr);
}
int main ()
{
	char str[] = "		hola jajaj!!!";
	char set[] = "	!";
	char *result = ft_strtrim(str, set);
	printf("%s\n", result);
	free(result);
}
