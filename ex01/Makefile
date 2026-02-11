NAME = Form
CPP = c++
 CFLAG = -Wall -Wextra -Werror -std=c++98
SRCS = Bureaucrat.cpp  main.cpp Form.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CFLAG) $(OBJS) -o $(NAME)
%.o:%.cpp
	$(CC) $(CFLAG) -c $< -o $@
clean:
	rm -f  $(OBJS)
fclean:
	rm -f $(OBJS) $(NAME)
re: fclean all
	