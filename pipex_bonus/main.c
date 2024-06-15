#include "pipex.h"

int	*create_pipes(char *argv[], int *fds[])
{
	int	i;

	i = 0;
	while (i < (get_p_amount(argv) + 1))
	{
		if (pipe(fds[i]) == -1)
			exit_func("Error creating pipe");
	}
	return (fds);
}

int	get_p_amount(char *argv[])
{
	int	i;

	i = 2;
	while (argv[i] && argv[i + 1])
		i++;
	return (i - 2);
}

void	command_runner(char *argv[], int *fds[], char *envp[])
{
	int	pids[get_p_amount(argv)];
	int	i;

	i = 0;
	while (i < get_p_amount(argv))
	{
		pids[i] = fork();
		if (pids[i] == -1)
			exit_func("Error forking");
		if (pids[i] == 0 && i = 0)
			first_process(argv, fds, envp, i);
		else if (pids[i] == 0 && i != get_p_amount(argv))
			middle_processes(argv, fds, envp, i);
		else if (pids[i] == 0 && i == get_p_amount(argv))
			last_process(argv, fds, envp, i);
		else
			i++;
	}
}

int	main(int ac, char *argv[], char *envp[])
{
	int	fds[get_p_amount(argv) + 1][2];

	if (ac < 5)
		exit_func("Input correct number of arguments");
	fds = create_pipes(argv, fds);
	run_commands(argv, fds, envp);
}
