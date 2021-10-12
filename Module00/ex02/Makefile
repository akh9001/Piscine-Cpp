# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/12 17:43:34 by akhalidy          #+#    #+#              #
#    Updated: 2021/10/12 17:47:39 by akhalidy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

NAME = accouts

SRCS = Account.cpp tests.cpp

FLAGS = -std=c++98 -Wall -Wextra -Werror

$(NAME): $(SRCS)
			@clang++ $(FLAGS) $(SRCS) -o $(NAME)
			@echo $(NAME) was created !

all : $(NAME)

clean	:
		@rm -f $(NAME)

fclean : clean

re		: clean all