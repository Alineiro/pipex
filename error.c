#include "pipex.h"

int	exit_func(char *error)
{
	perror(error);
	exit(1);
}
