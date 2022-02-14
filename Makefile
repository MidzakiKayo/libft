NAME := libft.a
SRC := \
ft_atoi.c \
ft_bzero.c \
ft_calloc.c \
ft_isalnum.c \
ft_isalpha.c \
ft_isascii.c \
ft_isdigit.c \
ft_isprint.c \
ft_itoa.c \
ft_memchr.c \
ft_memcmp.c \
ft_memcpy.c \
ft_memmove.c \
ft_memset.c \
ft_putchar_fd.c \
ft_putendl_fd.c \
ft_putnbr_fd.c \
ft_putstr_fd.c \
ft_split.c \
ft_strchr.c \
ft_strdup.c \
ft_striteri.c \
ft_strjoin.c \
ft_strlcat.c \
ft_strlcpy.c \
ft_strlen.c \
ft_strmapi.c \
ft_strncmp.c \
ft_strnstr.c \
ft_strrchr.c \
ft_strtrim.c \
ft_substr.c \
ft_tolower.c \
ft_toupper.c \
get_next_line/get_next_line.c \
get_next_line/get_next_line_utils.c \
ft_printf/libft/check_flags.c \
ft_printf/libft/ft_printf.c \
ft_printf/libft/ft_putnbr_base.c \
ft_printf/libft/ft_putnbr_m.c \
ft_printf/libft/ft_putstr_m.c \
ft_printf/libft/ft_putstr_nbr.c \
ft_printf/libft/parser_arg.c \
ft_printf/libft/parser_command.c


DIR_SRC := ./

SRCS = $(addprefix $(DIR_SRC), $(SRC))
OBJS = $(addprefix $(DIR_SRC), $(OBJ_FILES))

HEADER := libft.h \
		ft_printf/ft_printf.h \
		get_next_line/get_next_line.h

OBJ_FILES := $(SRC:.c=.o)
LIBC := ar rc
LIBR := ranlib
RM := rm -f
CC := gcc
CFLAGS := -Wall -Wextra -Werror -c

all: obj $(NAME)

obj: $(SRCS)

.c.o:
	$(CC) $(FLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
		$(LIBC) $(NAME) $(OBJS)
		$(LIBR) $(NAME)

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
