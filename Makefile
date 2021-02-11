# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esukava <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/06/10 12:13:28 by esukava           #+#    #+#              #
#    Updated: 2021/02/12 00:08:54 by alero            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC_LIST = *.c
HEADER = inc
FOLDER = src
CFLAGS = -g -Wall -Wextra -Werror
RM = rm -f
SRC = $(addprefix ${FOLDER}/, ${SRC_LIST})
OBJ = $(SRC:.c=.o)
INCLUDES = inc

all : $(NAME)

$(NAME) :	$(OBJ)
	gcc -g -Wall -Wextra -Werror -c $(SRC)
	ar rc ${NAME} ${OBJ}

%.o: %.
	@${CC} ${CFLAGS} -I 

clean :
	rm -f $(OBJ)


fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all, clean, fclean, re
