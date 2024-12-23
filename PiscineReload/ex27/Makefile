# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mvillavi <mvillavi@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/23 20:50:42 by mvillavi          #+#    #+#              #
#    Updated: 2024/12/23 20:50:49 by mvillavi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
SRCS = ft_display_file.c

CFLAGS = -Wall -Wextra -Werror
CC = cc
AR = ar -rcs

OBJDIR = build
OBJS = $(addprefix $(OBJDIR)/, ${SRCS:.c=.o})

PURPLE = \033[0;35m
BLUE   = \033[0;34m
RESET  = \033[m

all: $(NAME)

$(OBJDIR)/%.o : %.c | $(OBJDIR)
	@printf "%-42b%b" "$(PURPLE)$(<):" "$(BLUE)$(@F)$(RESET)\n"
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJDIR):
	@mkdir -p $(OBJDIR)

$(NAME): $(OBJS)
	@printf "%-42b%b" "$(PURPLE)$(*F):" "$(BLUE)$(@)$(RESET)\n"
	@$(CC) $(OBJS) $(CFLAGS) -o $@ 

fclean: clean
	@printf "%b" "$(BLUE)$(@)ing...$(RESET)\n"
	@rm -rf $(NAME)

clean:
	@printf "%b" "$(BLUE)$(@)ing...$(RESET)\n"
	@rm -rf $(OBJDIR)

re:    fclean all

.PHONY: all clean fclean re
