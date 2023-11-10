# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ededemog <ededemog@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/07 15:53:33 by ededemog          #+#    #+#              #
#    Updated: 2023/11/09 17:39:39 by ededemog         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Werror -Wextra -g
EXEC = prog
SRC = ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
		ft_isprint.c ft_strchr.c ft_strrchr.c ft_strlen.c ft_tolower.c \
		ft_toupper.c ft_memset.c ft_strdup ft_putchar_fd ft_putstr_fd \
		ft_putendl_fd ft_main.c

OBJ = $(SRC:.c=.o)

all : $(EXEC)

%.o : %.c
	$(CC) -o $@ -c $<

$(EXEC) : $(OBJ)
	$(CC) $(CFLAGS) -o $(EXEC) $(OBJ)

clean : 
	rm -rf *.o

fclean : clean
	rm -rf prog

re : fclean all

.PHONY:	all clean fclean re