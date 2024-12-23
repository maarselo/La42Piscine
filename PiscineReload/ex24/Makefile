# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mvillavi <mvillavi@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/21 12:58:47 by mvillavi          #+#    #+#              #
#    Updated: 2024/12/21 16:14:37 by mvillavi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a 
SRCS = srcs/ft_putchar.c \
       srcs/ft_putstr.c \
       srcs/ft_strcmp.c \
       srcs/ft_strlen.c \
       srcs/ft_swap.c
INC_DIR = includes 

OBJS = $(SRCS:.c=.o) 

CC = cc 
CFLAGS = -Wall -Wextra -Werror -I$(INC_DIR)
RM = rm -rf 

all : $(NAME) 

$(NAME): $(OBJS)
	ar rcs $(NAME)	$(OBJS)

srcs/%.o:srcs/%.c
	$(CC) $(CFLAGS) -c $< -o $@ 

clean : 
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean	all
