# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/14 07:44:09 by akhalidy          #+#    #+#              #
#    Updated: 2021/10/14 19:25:37 by akhalidy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

NAME = weapon

SRCS = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

FLAGS = -std=c++98 -Wall -Wextra -Werror

$(NAME): $(SRCS)
			@clang++ $(FLAGS) $(SRCS) -o $(NAME)
			@echo $(NAME) was created !

all : $(NAME)

clean	:
		@rm -f $(NAME)

fclean : clean

re		: clean all
