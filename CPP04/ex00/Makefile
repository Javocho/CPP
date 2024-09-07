# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: javocho <javocho@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/01 20:10:10 by fcosta-f          #+#    #+#              #
#    Updated: 2024/09/07 12:30:23 by javocho          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp

CC = c++

%.o: %.c Makefile Animal.hpp Dog.hpp Cat.hpp WrongAnimal.hpp WrongCat.hpp
	${CC} ${CPPFLAGS} -c $< -o $@	

OBJ = $(SRC:.cpp=.o)

RM = rm -f

CPPFLAGS = -Wall -Wextra -Werror -g -std=c++98

NAME = animals

all: $(NAME)

$(NAME): $(OBJ) Makefile 
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re