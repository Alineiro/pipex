NAME    =       pipex

SRCS    =       main.c 

LIBPATH	=	libft/

LIB	=	libft.a

OBJS            = ${SRCS:.c=.o}
INCLUDES        = ./
CC              = gcc
CFLAGS          = -Wall -Wextra -Werror -g3 #-fsanitize=address,leak
RM              = rm -f

${LIB}:
	${MAKE} -C ${LIBPATH}
	#cp ${LIBPATH}${LIB} .
	#${MAKE} fclean ${LIBPATH}

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:        ${OBJS} ${LIB}
	${CC} ${CFLAGS} ${OBJS} ${LIBPATH}${LIB} -o ${NAME}
	#ar rc ${NAME} ${OBJS} ${LIB}

all:            ${NAME}

clean:
	${RM} ${OBJS} ${LIB}

fclean:         clean
	${RM} ${NAME}

re:                     fclean all

.PHONY:         all clean fclean re
