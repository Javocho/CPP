# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fcosta-f <fcosta-f@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/19 01:06:58 by fcosta-f          #+#    #+#              #
#    Updated: 2024/08/19 01:06:59 by fcosta-f         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp Fixed.cpp

CC = c++

%.o: %.c Makefile Fixed.hpp
	${CC} ${CPPFLAGS} -c $< -o $@	

OBJ = $(SRC:.cpp=.o)

RM = rm -f

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = fixed

all: $(NAME)

$(NAME): $(OBJ) Makefile 
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re