#include "pipex.h"

void	first_process(char *argv[], int *fds[], char *envp[], int pos)
{
	int	infile;
	int	total_p;

	total_p = get_p_amount(argv);
	close(fds[0][READ]);
	infile = open(argv[1], O_RDONLY, 0644);
	if (infile == -1)
		exit_func("Error opening infile");
	if (dup2(infile, STDIN_FILENO) == -1)
		exit_func("Error duping stdin in child");
	if (dup2(fds[0][WRITE], STDOUT_FILENO) == -1)
		exit_func("Error duping stdout in child");
	close(infile);
	close(fds[0][WRITE]);
	exec_cmd(argv[2], envp);
}

void	middle_processes(char *argv[], int *fds[], char *envp[], int pos)
{

}

void	last_process(char *argv[], int *fds[], char *envp[], int pos)
{
	int	outfile;
	int	total_p;

	total_p = get_p_amount(argv);
	close(fds[total_p + 1][WRITE]);
	outfile = open(argv[total_p + 2], O_RDWR | O_TRUNC | O_CREAT, 0644);
	if (outfile == -1)
		exit_func("Error opening outfile");
	if (dup2(outfile, STDOUT_FILENO) == -1)
		exit_func("Error duping stdout in parent");
	if (dup2(fds[total_p + 1][READ], STDIN_FILENO) == -1)
		exit_func("Error duping stdin in parent");
	close(outfile);
	close(fds[total_p + 1][READ]);
	exec_cmd(argv[total_p + 2], envp);
}
