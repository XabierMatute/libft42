# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/23 16:17:58 by xmatute-          #+#    #+#              #
#    Updated: 2025/02/12 19:47:48 by xmatute-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC_IS =	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
			ft_isspace.c 

SRC_STR =	ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strlen.c \
			ft_strnstr.c ft_strlcpy.c ft_strlcat.c ft_strdup.c \
			ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
			ft_strmapi.c ft_striteri.c

SRC_MEM =	ft_memchr.c ft_memset.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
			ft_bzero.c ft_calloc.c \
			ft_free2.c ft_parrlen.c

SRC_TO =	ft_toupper.c ft_tolower.c \
			ft_atoi.c ft_itoa.c

SRC_PUT =	ft_putchar.c ft_putstr.c ft_putendl.c ft_putnbr.c \
			ft_putnbr_base.c ft_putunbr.c ft_putunbr_base.c \
			ft_putptr.c \
			ft_putva.c

SRC_LST =	ft_lstnew_bonus.c         \
			ft_lstadd_front_bonus.c   \
			ft_lstsize_bonus.c        \
			ft_lstlast_bonus.c        \
			ft_lstadd_back_bonus.c    \
			ft_lstdelone_bonus.c      \
			ft_lstclear_bonus.c       \
			ft_lstiter_bonus.c        \
			ft_lstmap_bonus.c

SRC_PRINTF =	ft_printf.c

SRC_SWAP =	ft_swap.c

SRC = $(SRC_IS) $(SRC_STR) $(SRC_MEM) $(SRC_TO) $(SRC_PUT) \
      $(SRC_LST) $(SRC_PRINTF) $(SRC_SWAP)
		
OBJS = $(SRC:%.c=%.o)

CFLAGS = -Wall -Werror -Wextra

SANI = -fsanitize=address -g3

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	echo "$(NAME) compiled"

clean:
	rm -f $(OBJS) $(BONUS_OBJS)
	echo ".o files removed"

fclean: clean
	rm -f $(NAME)
	echo "$(NAME) removed"

re: fclean $(NAME)

test: all
	gcc $(FLAGS) main.c $(NAME) -o test
	./test

sani:
	$(MAKE) FLAGS='$(SANI)' all

.PHONY: all clean fclean re test sani
