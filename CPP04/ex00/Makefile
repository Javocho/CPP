# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fcosta-f < fcosta-f@student.42barcelona    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/01 20:10:10 by fcosta-f          #+#    #+#              #
#    Updated: 2024/09/01 20:19:14 by fcosta-f         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp

CC = c++

%.o: %.c Makefile Animal.hpp Dog.hpp Cat.hpp
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