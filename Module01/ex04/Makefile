# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/15 08:12:35 by akhalidy          #+#    #+#              #
#    Updated: 2021/10/15 08:13:14 by akhalidy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


.PHONY: all clean fclean re

NAME = replace

SRCS = main.cpp 

FLAGS = -std=c++98 -Wall -Wextra -Werror

$(NAME): $(SRCS)
			@clang++ $(FLAGS) $(SRCS) -o $(NAME)
			@echo $(NAME) was created !

all : $(NAME)

clean	:
		@rm -f $(NAME)

fclean : clean

re		: clean all