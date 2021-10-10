# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/07 09:32:34 by akhalidy          #+#    #+#              #
#    Updated: 2021/10/10 16:48:30 by akhalidy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

NAME = phonebook

SRCS = phonebook.cpp contact.cpp help_functions.cpp main.cpp 

FLAGS = -std=c++98 -Wall -Wextra -Werror

$(NAME): $(SRCS)
			@clang++ $(FLAGS) $(SRCS) -o $(NAME)
			@echo $(NAME) was created !

all : $(NAME)

clean	:
		@rm -f $(NAME)

fclean : clean

re		: clean all