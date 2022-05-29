CC				= clang++

RM				= rm -f

FLAGS			= -Wall -Wextra -Werror

NAME			= software

SRCS			= 	Contact.cpp\
					PhoneBook.cpp\
					main.cpp\

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