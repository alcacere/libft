#ifndef GET_NEXT_LINE
# define GET_NEXT_LINE

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 128
# endif

# include "libft.h"

typedef struct s_gnl_state
{
	char	*buffer;
	size_t	capacity;
	size_t	len;
} t_gnl_state;

char	*get_next_line(int fd);

#endif
