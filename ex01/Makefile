# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iamongeo <iamongeo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/23 02:29:20 by iamongeo          #+#    #+#              #
#    Updated: 2023/03/27 22:43:36 by iamongeo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	main.cpp

CLS	=	Animal.cpp Dog.cpp Cat.cpp Brain.cpp

OBJS	=	$(SRCS:.cpp=.o) $(CLS:.cpp=.o)

CPPSTD	=	-std=c++98

CPPFLGS	=	$(CPPSTD) -Wall -Werror -Wextra

NAME	=	AnimalFarm

.c.o:
	c++ $(CPPFLGS) -o $< -c $@

$(NAME):	$(OBJS)
	c++ $(CPPFLGS) -o $(NAME) $(OBJS)

all:	$(NAME)

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
