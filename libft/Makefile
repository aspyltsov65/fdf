# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apyltsov <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 20:56:57 by apyltsov          #+#    #+#              #
#    Updated: 2017/11/07 20:57:32 by apyltsov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -c -Wall -Wextra -Werror
SOURCE = ft_isalnum.c\
		ft_atoi.c\
		ft_bzero.c\
		ft_isalpha.c\
		ft_isascii.c\
		ft_isdigit.c\
		ft_isprint.c\
		ft_lstdel.c\
		ft_lstadd.c\
		ft_lstiter.c\
		ft_lstdelone.c\
		ft_lstmap.c\
		ft_itoa.c\
		ft_memalloc.c\
		ft_lstnew.c\
		ft_memcpy.c\
		ft_memchr.c\
		ft_memccpy.c\
		ft_memset.c\
		ft_memcmp.c\
		ft_memdel.c\
		ft_putchar.c\
		ft_putchar_fd.c\
		ft_putendl.c\
		ft_putnbr.c\
		ft_memmove.c\
		ft_putendl_fd.c\
		ft_putstr_fd.c\
		ft_strchr.c\
		ft_putstr.c\
		ft_putnbr_fd.c\
		ft_strclr.c\
		ft_strdel.c\
		ft_strcat.c\
		ft_strdup.c\
		ft_strcpy.c\
		ft_striter.c\
		ft_strcmp.c\
		ft_strequ.c\
		ft_strlen.c\
		ft_striteri.c\
		ft_strmapi.c\
		ft_strjoin.c\
		ft_strmap.c\
		ft_strlcat.c\
		ft_strncmp.c\
		ft_strncat.c\
		ft_strncpy.c\
		ft_strnequ.c\
		ft_strnew.c\
		ft_strrchr.c\
		ft_strnstr.c\
		ft_strsub.c\
		ft_strstr.c\
		ft_toupper.c\
		ft_tolower.c\
		ft_strtrim.c\
		ft_strsplit.c\
		ft_freedom.c\
		ft_sort_params.c\
		ft_union.c\
		ft_count_words.c\
		ft_sqrt.c\
		ft_smassive.c

NAME = libft.a

COLF = $(SOURCE:.c=.o)

all: $(NAME)

$(NAME): $(COLF)
	@ar cr $@ $(COLF)

.c.o:
	@$(CC) $(CFLAGS) $<

clean:
	@rm -f $(COLF)

fclean: clean
	@rm -f $(NAME)

re: fclean all