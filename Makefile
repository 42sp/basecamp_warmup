# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iwillens <iwillens@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/01 01:03:00 by iwillens          #+#    #+#              #
#    Updated: 2020/11/01 02:36:21 by iwillens         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libbasecamp_test.a

INCLUDES = ./includes/

SRC_DIR = ./srcs/

OBJ_DIR = ./build/

SRCS 	= 	$(SRC_DIR)test_ascii.c \
			$(SRC_DIR)test_longexec.c \
			$(SRC_DIR)test_memset.c

OBJS = $(patsubst $(SRC_DIR)%.c, $(OBJ_DIR)%.o, $(SRCS))

all : $(NAME)

$(NAME) : $(OBJS)
	ar -r $(NAME) $(OBJS)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	mkdir -p $(OBJ_DIR)
	gcc -Wall -Wextra -Werror -I./$(INCLUDES) -c $<  -o $@

test: re
	gcc -Wall -Werror -Wextra main.c -I./includes -L. -lbasecamp_test -o test
	@./test
	@rm ./test

clean: 
	@rm -f $(OBJS)

fclean : clean
	@rm -f $(NAME)

re : fclean $(NAME)