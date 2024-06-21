#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <wait.h>
#include <stdio.h>

#define READ 0
#define WRITE 1

void	first_process(int fds[][2])
{
	char	*array[] = {"cat", "-e", NULL};
	int	infile;
	int	i;

	i = 0;
	printf("holi 1\n");
	//close(fds[0][READ]);
	infile = open("infile", O_RDONLY, 0644);
	if (infile == -1)
	{
		printf("Error opening infile\n");
		exit(1);
	}
	if (dup2(infile, STDIN_FILENO) == -1)
	{
		printf("Error duping stdin in first\n");
		exit(1);
	}
	if (dup2(fds[0][WRITE], STDOUT_FILENO) == -1)
	{
		printf("Error duping stdout in first\n");
		exit(1);
	}
	//close(infile);
	//close(fds[0][WRITE]);
	if (access("/bin/cat", X_OK) == -1)
	{
		printf("Cant access /bin/cat\n");
		exit(1);
	}
	close(infile);
	for (i = 0; i < 2; i++) {
        	close(fds[i][READ]);
        	close(fds[i][WRITE]);
    	}
	if (execve("/bin/cat", array, NULL) == -1)
	{
		printf("Error executing command first\n");
		exit(1);
	}
}

void	middle_processes(int fds[][2], int pos)
{
	char	*array[] = {"cat", "-e", NULL};
	int	i;

	i = 0;
	printf("Holi 2\n");
	//close(fds[pos][READ]);
	if (dup2(fds[pos - 1][READ], STDIN_FILENO) == -1)
	{
		printf("Error duping stdin in middle\n");
		exit(1);
	}
	if (dup2(fds[pos][WRITE], STDOUT_FILENO) == -1)
	{
		printf("Error duping stdout in middle\n");
		exit(1);
	}
	//close(fds[pos - 1][READ]);
	//close(fds[pos][READ]);
	//close(fds[pos][WRITE]);
	//close(fds[pos - 1][WRITE]);
	if (access("/bin/cat", X_OK) == -1)
	{
		printf("Cant access /bin/cat\n");
		exit(1);
	}
	for (i = 0; i < 2; i++) {
        	close(fds[i][READ]);
        	close(fds[i][WRITE]);
    	}
	if (execve("/bin/cat", array, NULL) == -1)
	{
		printf("Error executing command middle\n");
		exit(1);
	}
}

void	last_process(int fds[][2])
{
	int	outfile;
	char	*array[] = {"cat", "-e", NULL};
	int	i;

	i = 0;
	printf("Holi 3\n");
	//close(fds[1][WRITE]);
	outfile = open("receiver", O_RDWR | O_TRUNC | O_CREAT, 0644);
	if (outfile == -1)
	{
		printf("Error opening outfile\n");
		exit(1);
	}
	if (dup2(outfile, STDOUT_FILENO) == -1)
	{
		printf("Error duping stdout in last\n");
		exit(1);
	}
	if (dup2(fds[1][READ], STDIN_FILENO) == -1)
	{
		printf("Error duping stdin in last\n");
		exit(1);
	}
	//close(outfile);
	//close(fds[1][READ]);
	if (access("/bin/cat", X_OK) == -1)
	{
		printf("Cant access /bin/cat\n");
		exit(1);
	}
	close(outfile);
	for (i = 0; i < 2; i++) {
        	close(fds[i][READ]);
        	close(fds[i][WRITE]);
    	}
	if (execve("/bin/cat", array, NULL) == -1)
	{
		printf("Error executing command last\n");
		exit(1);
	}
}

int	main(void)
{
	int	fds[2][2];
	int	pids[3];
	int	i = 0;

	while (i < 2)
	{
		printf("enters pipe creating loop\n");
		if (pipe(fds[i]) == -1)
			return (printf("error pipes\n"), 1);
		i++;
	}
	i = 0;
	while (i < 3)
	{
		printf("enters process creating loop\n");
		pids[i] = fork();
		if (pids[i] == -1)
			return (printf("error forking\n"), 1);
		if (pids[i] == 0 && i == 0)
		{
			printf("should enter first loop\n");
			first_process(fds);
		}
		else if (pids[i] == 0 && i < 2 && i != 0)
		{
			printf("should enter middle loop\n");
			middle_processes(fds, i);
		}
		else if (pids[i] == 0 && i == 2)
		{
			printf("should enter last loop\n");
			last_process(fds);
		}
		else
			i++;
	}
	while (waitpid(-1, NULL, NULL) != -1)
		continue;
	for (i = 0; i < 2; i++) {
        	close(fds[i][READ]);
        	close(fds[i][WRITE]);
    	}
}
