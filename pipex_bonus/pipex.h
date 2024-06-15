#ifndef PIPEX_H
# define PIPEX_H

# include "libft/libft.h"

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <wait.h>
# include <stdio.h>

# define READ 0
# define WRITE 1

void	first_process(char *argv[], int *fds[], char *envp[], int pos);
void	middle_processes(char *argv[], int *fds[], char *envp[], int pos);
void	last_process(char *argv[], int *fds[], char *envp[], int pos);
void	exec_cmd(char *arg, char *envp[]);
int		get_p_amount(char *argv[]);
int		*create_pipes(char *argv[], int *fds[]);
int		exit_func(char *error);
char	*pathfinder(char *envp[], char *cmd);
char	*get_path(char *array[], char *cmd);

#endif
