# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: svaskeli <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/03 19:25:09 by svaskeli          #+#    #+#              #
#    Updated: 2019/03/03 19:25:13 by svaskeli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Werror -Wextra

SRCS =	ft_2d_char_free.c		ft_memchr.c				ft_strjoin.c \
		ft_2d_int_free.c		ft_memcmp.c				ft_strjoinfree.c \
		ft_atoi.c				ft_memcpy.c				ft_strjoinfree_s1.c \
		ft_atoi_intmax.c		ft_memdel.c				ft_strjoinfree_s2.c \
		ft_bzero.c				ft_memmove.c			ft_strlcat.c \
		ft_freestr.c			ft_memset.c				ft_strlcpy.c \
		ft_isalnum.c			ft_numpwr.c				ft_strlen.c \
		ft_isalpha.c			ft_strmap.c				ft_isascii.c \
		ft_putchar.c			ft_strmapi.c 			ft_striteri.c \
		ft_isblank.c			ft_putchar_fd.c			ft_strncat.c \
		ft_isdigit.c			ft_putendl.c			ft_strncmp.c \
		ft_isprint.c			ft_putendl_fd.c			ft_strncpy.c \
		ft_isspace.c			ft_putnbr.c				ft_strndup.c \
		ft_itoa.c				ft_putnbr_fd.c			ft_strnequ.c \
		ft_itoa_base.c			ft_putstr.c				ft_strnew.c \
		ft_itoa_intmax.c		ft_putstr_fd.c			ft_strnstr.c \
		ft_itoa_unsigned.c		ft_split_whitespaces.c	ft_strrchr.c \
		ft_listlen_char.c		ft_sqrt.c				ft_strrev.c \
		ft_listlen_int.c		ft_strcat.c				ft_strsplit.c \
		ft_listsize.c			ft_strchr.c				ft_strstr.c \
		ft_lstadd.c				ft_strclr.c				ft_strsub.c \
		ft_lstdel.c				ft_strcmp.c				ft_strtrim.c \
		ft_lstdelone.c			ft_strcpy.c				ft_swap.c \
		ft_lstiter.c			ft_strdel.c				ft_tolower.c \
		ft_lstmap.c				ft_strdup.c				ft_toupper.c \
		ft_lstnew.c				ft_strequ.c				get_next_line.c \
		ft_memalloc.c			ft_striter.c			ft_memccpy.c \

SRCS_PF =	binary.c				build_width.c			parse_flags_width.c \
			read_floats.c			build_float.c			error_protection.c \
			parse_length.c			read_numbers.c			build_precision.c \
			ft_printf.c				parse_precision.c		read_others.c \
			build_prefix.c			initialize.c			parse_type.c

SRCS_DIR = srcs/
SRCS_PRINTF = srcs/ft_printf/
OBJS_DIR = objs/
OBJS_PRINTF = objs/ft_printf/

INC = includes/
HEADER = $(INC)libft.h $(INC)get_next_line.h $(INC)ft_printf.h

SRCS_PATH = $(SRCS:%=$(SRCS_DIR)%)
SRCS_PF_PATH = $(SRCS_PF:%=$(SRCS_PRINTF)%)

OBJS = $(SRCS:%.c=%.o)
OBJS_PF = $(SRCS_PF:%.c=%.o)
OBJS_PATH = $(addprefix $(OBJS_DIR), $(OBJS))
OBJS_PF_PATH = $(addprefix $(OBJS_PRINTF), $(OBJS_PF))

GREEN = "\033[0;32m"
RED = "\033[0;31m"
DEFAULT = "\033[0m"

all: $(NAME)

norm:
	norminette $(INC) $(SRCS_DIR)

$(NAME): $(OBJS_DIR) $(OBJS_PRINTF) $(OBJS_PATH) $(OBJS_PF_PATH) $(HEADER)
	@echo "Compiling:" $(GREEN) $(NAME) $(DEFAULT)
	ar rc $(NAME) $(OBJS_PATH) $(OBJS_PF_PATH)
	ranlib $(NAME)

$(OBJS_DIR):
	@mkdir -p $(OBJS_DIR)

$(OBJS_PRINTF):
	@mkdir -p $(OBJS_PRINTF)

$(OBJS_DIR)%.o: $(SRCS_DIR)%.c $(HEADER)
	@echo "Compiling:" $(GREEN) $< $(DEFAULT)
	gcc -c $(FLAGS) $< -o $@ -I $(INC)

$(OBJS_PRINTF)%.o: $(SRCS_PRINTF)%.c $(HEADER)
	@echo "Compiling:" $(GREEN) $< $(DEFAULT)
	gcc -c $(FLAGS) $< -o $@ -I $(INC)

clean:
	@rm -rf $(OBJS_DIR)

fclean:
	@rm -rf $(OBJS_DIR) $(NAME)

re: fclean all

.PHONY: all comp_libft norm clean fclean re
