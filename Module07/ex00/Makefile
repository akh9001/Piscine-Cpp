# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/11 03:27:30 by akhalidy          #+#    #+#              #
#    Updated: 2021/12/11 05:14:49 by akhalidy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY : all clean fclean re run

NAME = ex00

SRCS = main.cpp

FLAGS = -Wall -Werror -Wextra -std=c++98

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