#include "pipex.h"

void	child_p(char *argv[], int fd[], char *envp[])
{
	int	infile;

	close(fd[0]);
	infile = open(argv[1], O_RDONLY, 0644);
	if (infile == -1)
		exit_func("issue opening infile");
	if (dup2(infile, STDIN_FILENO) == -1)
		exit_func("issue duping stdin in child");
	if (dup2(fd[1], STDOUT_FILENO) == -1)
		exit_func("issue duping stdout in child");
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
		exit_func("issue opening outfile");
	if (dup2(outfile, STDOUT_FILENO) == -1)
		exit_func("issue duping stdout in parent");
	if (dup2(fd[0], STDIN_FILENO) == -1)
		exit_func("issue duping stdin in parent");
	close(outfile);
	close(fd[0]);
	exec_cmd(argv[3], envp);
}
