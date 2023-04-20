# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afaucher <afaucher@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/16 14:43:23 by polpi             #+#    #+#              #
#    Updated: 2023/04/20 13:38:04 by afaucher         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# gcc -fsanitize=thread -g threads.c && ./a.out --> Affiche un warning pour voir si il y'a une data race

CC = gcc
CFLAGS = -Wall -Wextra -Werror -fsanitize=thread -g -pthread
NAME = philo
LIBFT = libft/libft.a
SRCS = $(wildcard *.c) $(wildcard */*.c)
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME) -pthread

$(LIBFT):
	make -C libft

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
	make clean -C libft

fclean: clean
	rm -f $(NAME)
	make fclean -C libft

re: fclean all

.PHONY: all clean fclean re
