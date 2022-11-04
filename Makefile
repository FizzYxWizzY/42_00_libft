# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/28 16:01:02 by mflury            #+#    #+#              #
#    Updated: 2022/11/04 17:21:55 by mflury           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
OBJ = $(SRC:.c=.o)
CC = @gcc
CFLAGS += -Wall -Werror -Wextra -pedantic -pedantic-errors

SRC = $(SRC_P1) $(SRC_P2)

SRC_P1 = \
	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_atoi.c \
	ft_memset.c ft_bzero.c ft_memcpy.c ft_memcmp.c ft_memmove.c ft_memchr.c \
	ft_strlen.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strnstr.c \
	ft_toupper.c ft_tolower.c \

SRC_P2 = \
	\
	\
	\

SRC_BONUS = \
	\
	\
	\

all : $(NAME)

$(NAME) : $(OBJ) $(HEADER)
	@echo Creating static library
	@ar rcs $(NAME) $(OBJ)

%.o : %.c
	@echo Creating objets files $<
	@$(CC) -o $@  -c $< $(CFLAGS)

clean :
	@echo Deleting objets files
	@rm -f $(OBJ)

fclean : clean
	@echo Deleting others files
	@rm -f $(NAME) $(NAME).tar.gz $(NAME).zip

re : fclean all

tar :
	@echo Creating TAR.GZ archive
	@tar -czvf $(NAME).tar.gz $(SRC) libft.h Makefile

zip :
	@echo Creating ZIP archive
	@zip -r $(NAME).zip $(SRC) libft.h Makefile

.PHONY : clean fclean re tar zip
