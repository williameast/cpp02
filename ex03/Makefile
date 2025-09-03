#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: weast <weast@student.42berlin.de>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/14 10:31:24 by weast             #+#    #+#              #
#    Updated: 2025/09/03 18:08:25 by weast            ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = bin/bsp
SRCDIR = src
INCDIR = include
OBJDIR = obj
HEADERS = $(INCDIR)/Fixed.hpp $(INCDIR)/Point.hpp
SRC = $(SRCDIR)/main.cpp $(SRCDIR)/Fixed.cpp $(SRCDIR)/Point.cpp
OBJ = $(SRC:$(SRCDIR)/%.cpp=$(OBJDIR)/%.o)
CPP = c++
FLAGS = -Wall -Wextra -Werror --std=c++98 -I$(INCDIR)
DEPS = $(HEADERS) Makefile

all: $(NAME)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp $(DEPS) | $(OBJDIR)
		$(CPP) $(FLAGS) -c $< -o $@ -g

$(NAME): $(OBJ) | bin
		$(CPP) $(OBJ) -o $(NAME)

$(OBJDIR):
		mkdir -p $(OBJDIR)

bin:
		mkdir -p bin

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

dev: $(OBJ) | bin
		$(CPP) $(OBJ) -o $(NAME) -g

re: fclean all

.PHONY: all clean fclean re dev
