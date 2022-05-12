NAME = push_swap

SRC = 	push_swap.c \
		src/swaps.c \
		src/pushs.c \

CC = gcc

CFLAG = -Wall -Wextra -Werror

OBJS = ${SRC:.c=.o}

RM = rm -f

HEADER = push_swap.h

all: ${NAME}

${NAME}: ${OBJS} ${HEADER}
		@${MAKE} -C ./libft
		@${CC} ${CFLAGS} ${OBJS} ./libft/libft.a -o ${NAME}

clean:
		@${MAKE} -C ./libft fclean
		@${RM} ${OBJS}
fclean: clean
		@${RM} ${NAME}
re: fclean all 

.PHONY: all clean fclean re