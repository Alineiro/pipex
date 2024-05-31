#include "pipex.h"

int	exit_func(char *error)
{
	perror(error);
	exit(EXIT_FAILURE);
}

char	*get_path(char *cmd, char *envp[])
{
	char	**array;
	char	*path;
	int	i;
	
	i = 0;
	path = NULL;
	if (envp == NULL)
		exit_func("no envp");
	while (envp[i] && (ft_strncmp(envp[i], "PATH=", 5) != 0))
		i++;
	if (envp[i] == NULL)
		exit_func("no_path");
	array = ft_split(&envp[i][5], ':');
	if (!array)
		exit_func("ft_split");
	i = 0;
	while (array[i] && array[i + 1])		//changed condition
	{
		cmd = ft_strjoin("/", cmd);
		if (!cmd)
			exit_func("ft_strjoin");
		path = ft_strjoin(array[i], cmd);
		if (!path)
			exit_func("ft_strjoin");
		if (access(path, F_OK) == 0)
			return (path);
		free(path);
		i++;
	}
	if (access(path, F_OK) != -1)			//changed condition
		return (cmd);
	return (path);
}

void	exec_cmd(char *arg, char *envp[])
{
	char	**array;
	char	*path;

	array = ft_split(arg, ' ');
	if (!array)
		exit_func("ft_split");
	path = get_path(array[0], envp);
	if (!path)
		exit_func("get_path");
	if (execve(path, array, envp) == -1)
		exit_func("execve");
}

void	child_p(char *argv[], int fd[], char *envp[])
{
	int	infile;

	close(fd[0]);
	infile = open(argv[1], O_RDONLY, 0644);
	if (infile == -1)
		exit_func("open");
	if (dup2(infile, STDIN_FILENO) == -1)
		exit_func("dup2"); 
	if (dup2(fd[1], STDOUT_FILENO) == -1)
		exit_func("dup2");
	close(infile);
	close(fd[1]);
	exec_cmd(argv[2], envp);
}

void	parent_p(char *argv[], int fd[], char *envp[])
{
	int	outfile;

	close(fd[1]);
	outfile = open(argv[4], O_RDWR | O_TRUNC | O_CREAT, 0644);
	if (outfile == -1)
		exit_func("open");
	if (dup2(outfile, STDOUT_FILENO) == -1)
		exit_func("dup2"); 
	if (dup2(fd[0], STDIN_FILENO) == -1)
		exit_func("dup2");
	close(outfile);
	close(fd[0]);
	exec_cmd(argv[3], envp);
}

int	main(int ac, char *argv[], char *envp[])
{
	int	fd[2];
	int	pid;

	if (ac != 5)
		exit_func("input 4 args");
	if (pipe(fd) == -1)
		exit_func("pipe");
	pid = fork();
	if (pid == -1)
		exit_func("fork");
	if (pid == 0)
		child_p(argv, fd, envp);
	else
	{
		wait(0);
		parent_p(argv, fd, envp);
	}
}

