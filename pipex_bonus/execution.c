#include "pipex.h"

void	exec_cmd(char *arg, char *envp[])
{
	char	**array;
	char	*path;

	array = ft_split(arg, ' ');
	if (!array)
		exit_func("Error creating commands array");
	path = pathfinder(envp, array[0]);
	if (!path)
		exit_func("Error finding path");
	if (execve(path, array, envp) == -1)
		exit_func("Error executing command");
}
