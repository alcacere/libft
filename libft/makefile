LIB = ar rcs

NAME = libft.a

CC = cc

CCFLAGS = -Wall -Wextra -Werror

RM = rm -rf

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c

OBJ = $(SRC:.c=.o)

INCLUDE = libft.h

%.o: %.c
	$(CC) $(CCFLAGS) -c -o $@ $<

$(NAME): $(OBJ) $(INCLUDE)
	$(LIB) $(NAME) $(OBJ)

all: $(NAME)


clean:
	@$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY : all clean fclean re	
