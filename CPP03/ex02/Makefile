# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: javocho <javocho@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/24 16:58:58 by javocho           #+#    #+#              #
#    Updated: 2024/08/30 19:48:07 by javocho          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

CC = c++

%.o: %.c Makefile ClapTrap.hpp ScavTrap.hpp FragTrap.hpp
	${CC} ${CPPFLAGS} -c $< -o $@	

OBJ = $(SRC:.cpp=.o)

RM = rm -f

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = fragTrap

all: $(NAME)

$(NAME): $(OBJ) Makefile 
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re