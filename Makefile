# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apyltsov <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/12 19:16:57 by apyltsov          #+#    #+#              #
#    Updated: 2018/02/12 19:16:59 by apyltsov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror -lmlx -framework OpenGL -framework AppKit
NAME = fdf
SRCFILL = main.c\
		atoi_base.c\
		ft_freelist.c\
		get_next_line.c\
		ft_key_hook.c\
		line.c\
		read.c\
		ft_rotation.c\
		ft_move.c
BINS = $(SRCFILL:.c=.o)
LIBFT = libft/

all: $(NAME)

$(NAME): $(BINS)
	@make -C $(LIBFT)
	@$(CC) $(CFLAGS) -o $(NAME) $(SRCFILL) libft/libft.a

.c.o:
	@$(CC) -c $(GFLAGS) $<

clean:
	@make clean -C $(LIBFT)
	@rm -f $(BINS)

fclean: clean
	@make fclean -C $(LIBFT)
	@rm -f $(NAME)

re: fclean all
