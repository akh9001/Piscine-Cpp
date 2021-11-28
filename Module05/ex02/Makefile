# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/17 19:11:58 by akhalidy          #+#    #+#              #
#    Updated: 2021/11/27 07:13:22 by akhalidy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY : all clean fclean re

NAME = ex01

SRCS = Bureaucrat.cpp Form.cpp main.cpp

FLAGS = -Wall -Werror -Wextra -std=c++98 -g3 -fsanitize=address

$(NAME) : $(SRCS)
		@clang++ $(FLAGS) $(SRCS) -o $(NAME)
		@echo $(NAME) was created!

all : $(NAME)

clean :
		@rm -rf $(NAME)

fclean : clean

re : fclean all

run : re
		@./$(NAME) 