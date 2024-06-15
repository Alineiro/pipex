#include "pipex.h"

char	*get_path(char *array[], char *cmd)
{
	char	*path;
	int		i;

	i = 0;
	path = NULL;
	while (array[i] && array[i + 1])
	{
		cmd = ft_strjoin("/", cmd);
		if (!cmd)
			return (NULL);
		path = ft_strjoin(array[i], cmd);
		if (!path)
			return (NULL);
		if (access(path, F_OK) == 0)
			return (path);
		free(path);
		i++;
	}
	if (access(path, F_OK) != -1)
		return (cmd);
	return (path);
}

char	*pathfinder(char *envp[], char *cmd)
{
	char	**array;
	char	*path;
	int		i;

	i = 0;
	if (envp == NULL)
		exit_func("no path found");
	while (envp[i] && (ft_strncmp(envp[i], "PATH=", 5) != 0))
		i++;
	if (envp[i] == NULL)
		exit_func("no path found");
	array = ft_split(&envp[i][5], ':');
	if (!array)
		exit_func("failure creating envp array");
	path = get_path(array, cmd);
	if (!path)
		exit_func("could not create path");
	return (path);
}
