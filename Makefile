NAME    =       pipex

SRCS    =       main.c \
		pipex.c \
		pathfinder.c \
		execution.c \
		error.c

LIBPATH	=	libft/

LIB	=	libft.a

OBJS            = ${SRCS:.c=.o}
INCLUDES        = ./
CC              = gcc
CFLAGS          = -Wall -Wextra -Werror #-g3 -fsanitize=address,leak
RM              = rm -f

${LIB}:
	${MAKE} -C ${LIBPATH}

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:        ${OBJS} ${LIB}
	${CC} ${CFLAGS} ${OBJS} ${LIBPATH}${LIB} -o ${NAME}

all:            ${NAME}

clean:
	${RM} ${OBJS} ${LIB}

fclean:         clean
	${RM} ${NAME}

re:                     fclean all

.PHONY:         all clean fclean re
