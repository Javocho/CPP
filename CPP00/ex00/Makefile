# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fcosta-f < fcosta-f@student.42barcelona    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/04 14:52:53 by fcosta-f          #+#    #+#              #
#    Updated: 2024/08/04 15:01:40 by fcosta-f         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = megaphone.cpp

%.o: %.c Makefile
	${CC} ${CFLAGS} -c $< -o $@	

OBJ = $(SRC:.cpp=.o)

CC = g++

RM = rm -f

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = megaphone

all: $(NAME)

$(NAME): $(OBJ) Makefile
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re