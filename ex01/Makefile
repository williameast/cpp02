#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: weast <weast@student.42berlin.de>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/14 10:31:24 by weast             #+#    #+#              #
#    Updated: 2025/08/26 13:49:10 by weast            ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = fixed
HEADERS = Fixed.hpp
SRC = main.cpp Fixed.cpp
OBJ = $(SRC:.cpp=.o)
CPP = c++
FLAGS = -Wall -Wextra -Werror --std=c++98
DEPS = $(HEADERS) Makefile

all: $(NAME)

%.o: %.cpp $(DEPS)
		$(CPP) $(FLAGS) -c $< -o $@ -g

$(NAME): $(OBJ)
		$(CPP) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

dev: $(OBJ)
		$(CPP) $(OBJ) -o $(NAME) -g

re: fclean all

.PHONY: all clean fclean re dev
