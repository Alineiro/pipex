#include "pipex.h"

int	main(int ac, char *argv[], char *envp[])
{
	int	fd[2];
	int	pid;

	if (ac != 5)
		exit_func("input correct number of arguments");
	if (pipe(fd) == -1)
		exit_func("issue creating pipe");
	pid = fork();
	if (pid == -1)
		exit_func("issue forking");
	if (pid == 0)
		child_p(argv, fd, envp);
	else
	{
		wait(0);
		parent_p(argv, fd, envp);
	}
}
