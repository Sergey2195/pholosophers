NAME = philo_bonus

HEADER	=	philo_bonus.h

SRC	=	check_arg.c error.c ft_atoi.c init.c living.c main_bonus.c utils.c

CC 		= gcc

FLAGS	= 	-Wall -Werror -Wextra

LINKS	=	-lpthread

OBJS 	= $(SRC:.c=.o)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(LINKS) $(SRC) -o $(NAME)

all: $(NAME) $(OBJS) $(HEADER)

%.o: %.c $(HEADER)
		$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re