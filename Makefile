# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcosta-d <mcosta-d@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/07 19:22:23 by mcosta-d          #+#    #+#              #
#    Updated: 2023/05/07 21:56:05 by mcosta-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFILES = ft_memcpy.c ft_memset.c ft_bzero.c\
ft_isalnum.c ft_isalpha.c ft_isascii.c\
ft_isdigit.c ft_isprint.c ft_atoi.c\
ft_strlen.c ft_tolower.c ft_toupper.c\
ft_strlcpy.c ft_strncmp.c ft_strlcat.c\
ft_memmove.c ft_memcmp.c ft_strchr.c\
ft_strrchr.c ft_memchr.c ft_strnstr.c\
ft_calloc.c ft_strdup.c ft_substr.c\
ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c\
ft_itoa.c ft_strjoin.c ft_putnbr_fd.c\
ft_strtrim.c ft_striteri.c ft_strmapi.c ft_split.c\

BONUS_FILES = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c\
ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c\
ft_lstiter.c ft_lstmap.c\

CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

CFILES_O = $(CFILES:.c=.o)
BONUS_FILES_O = $(BONUS_FILES:.c=.o)

$(NAME): $(CFILES_O)
	ar -rc $(NAME) $(CFILES_O)

all: $(NAME)

clean:
	$(RM) $(CFILES_O) $(BONUS_FILES_O)

fclean: clean
	$(RM) $(NAME)

bonus: $(BONUS_FILES_O)
	ar -rc $(NAME) $(BONUS_FILES_O)

re: fclean all

.PHONY: all clean fclean re bonus
