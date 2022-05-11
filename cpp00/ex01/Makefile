# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zchbani <zchbani@student.1337.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/11 09:57:49 by zchbani           #+#    #+#              #
#    Updated: 2022/05/11 09:58:33 by zchbani          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC				= g++

RM				= rm -f

FLAGS			= -Wall -Wextra -Werror

NAME			= software

SRCS			= 	Contact.cpp\
					PhoneBook.cpp\

OBJS			= $(SRCS:.cpp=.o)

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CC) $(FLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re