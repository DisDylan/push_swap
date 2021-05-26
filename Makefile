SRCS = srcs/commands.c srcs/ft_atoi.c srcs/ft_isdigit.c srcs/ft_putstr.c srcs/push_swap_utils.c srcs/main.c srcs/ft_split.c srcs/ft_strlen.c srcs/ft_substr.c

OBJS = ${SRCS:.c=.o}

INCLUDES = includes/push_swap.h

NAME = push_swap

CC = clang

RM = rm -f

CFLAGS = -Wall -Wextra -Werror #-fsanitize=address

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${INCLUDES}

${NAME}: ${OBJS}
	${CC} ${CFLAGS} -o ${NAME} ${OBJS}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all
