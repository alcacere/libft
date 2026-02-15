# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alcacere <alcacere@student.42madrid.c      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/04 20:56:25 by alcacere          #+#    #+#              #
#    Updated: 2026/02/15 14:06:54 by alcacere         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        = libft.a
CC          = cc
CFLAGS      = -Wall -Wextra -Werror -I./$(INC_DIR)
AR          = ar rcs
RM          = rm -rf

SRC_DIR     = src
OBJ_DIR     = obj
INC_DIR     = include

CTYPE_DIR   = ctype
CTYPE_FLS   = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
              ft_toupper.c ft_tolower.c

STR_DIR     = string
STR_FLS     = ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c \
              ft_strncmp.c ft_strnstr.c ft_strdup.c ft_substr.c ft_strjoin.c \
              ft_strtrim.c ft_split.c ft_strmapi.c ft_striteri.c ft_strcmp.c \
			  ft_split_charset.c

MEM_DIR     = memory
MEM_FLS     = ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c \
              ft_memcmp.c ft_calloc.c ft_free_arr.c


IO_DIR      = io
IO_FLS      = ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
              ft_printf.c ft_printf_utils.c ft_printf_other_utils.c \
			  get_next_line.c

CONV_DIR    = convert
CONV_FLS    = ft_atoi.c ft_itoa.c

LST_DIR     = list
LST_FLS     = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c \
              ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c \
              ft_lstmap_bonus.c

SRCS_RAW    = $(addprefix $(CTYPE_DIR)/, $(CTYPE_FLS)) \
              $(addprefix $(STR_DIR)/, $(STR_FLS)) \
              $(addprefix $(MEM_DIR)/, $(MEM_FLS)) \
              $(addprefix $(IO_DIR)/, $(IO_FLS)) \
              $(addprefix $(CONV_DIR)/, $(CONV_FLS)) \
              $(addprefix $(LST_DIR)/, $(LST_FLS))

SRCS        = $(addprefix $(SRC_DIR)/, $(SRCS_RAW))

OBJS        = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRCS))

all: $(NAME)

$(NAME): $(OBJS)
	@$(AR) $(NAME) $(OBJS)
	@echo "$(NAME) created successfully"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(@D)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJ_DIR)
	@echo "Objects cleaned"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(NAME) removed"

re: fclean all

.PHONY: all clean fclean re
