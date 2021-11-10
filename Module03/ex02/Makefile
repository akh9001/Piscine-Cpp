# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/08 10:31:18 by akhalidy          #+#    #+#              #
#    Updated: 2021/11/10 16:09:38 by akhalidy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY : all clean fclean re

NAME = ex02

SRCS = ClapTrap.cpp main.cpp ScavTrap.cpp FragTrap.cpp

FLAGS = -Wall -Werror -Wextra -std=c++98

$(NAME) : $(SRCS)
		@clang++ $(FLAGS) $(SRCS) -o $(NAME)
		@echo $(NAME) was created!

all : $(NAME)

clean :
		@rm -rf $(NAME)

fclean : clean

re : fclean all

run : all
		@./$(NAME)