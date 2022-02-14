# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bchytter <bchytter@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/31 23:28:29 by bchytter          #+#    #+#              #
#    Updated: 2021/10/31 23:28:29 by bchytter         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = gcc
NAME = libftprintf.a
FLAGS += -g -Wall -Wextra -Werror

SRCSDIR = libft
FILES = $(SRCSDIR)/ft_printf.c \
$(SRCSDIR)/ft_putnbr_base.c \
$(SRCSDIR)/ft_putnbr_m.c \
$(SRCSDIR)/parser_arg.c \
$(SRCSDIR)/ft_putstr_m.c \
$(SRCSDIR)/parser_command.c \
$(SRCSDIR)/check_flags.c \
$(SRCSDIR)/ft_strlen.c \
$(SRCSDIR)/ft_putstr_nbr.c \

HEAD = ./libft
SRC	:=	$(addprefix $(SRC_DIR), $(FILES))
OBJ = $(SRC:.c=.o)

LIBFT 		= libft/libft.a

all: $(NAME)

bonus: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)

$(OBJ): %.o: %.c
	@gcc $(CFLAGS) -I $(HEAD) -c $< -o $@

clean:
	@/bin/rm -rf $(OBJ)

fclean: clean
	@/bin/rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
