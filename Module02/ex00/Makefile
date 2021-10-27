# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/24 19:03:17 by akhalidy          #+#    #+#              #
#    Updated: 2021/10/24 19:41:12 by akhalidy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

NAME = ex00

SRCS = main.cpp Fixed.cpp

FLAGS = -std=c++98 -Wall -Wextra -Werror

$(NAME): $(SRCS)
			@clang++ $(FLAGS) $(SRCS) -o $(NAME)
			@echo $(NAME) was created !

all : $(NAME)

clean	:
		@rm -f $(NAME)

fclean : clean

re		: clean all