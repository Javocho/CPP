# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fcosta-f <fcosta-f@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/11 17:13:49 by fcosta-f          #+#    #+#              #
#    Updated: 2024/08/16 18:46:22 by fcosta-f         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

CC = c++

%.o: %.c Makefile HumanA.hpp HumanB.hpp Weapon.hpp
	${CC} ${CPPFLAGS} -c $< -o $@	

OBJ = $(SRC:.cpp=.o)

RM = rm -f

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = violence

all: $(NAME)

$(NAME): $(OBJ) Makefile 
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re