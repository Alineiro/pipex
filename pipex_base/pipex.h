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

void	child_p(char *argv[], int fd[], char *envp[]);
void	parent_p(char *argv[], int fd[], char *envp[]);
void	exec_cmd(char *arg, char *envp[]);
int		exit_func(char *error);
char	*pathfinder(char *envp[], char *cmd);
char	*get_path(char *array[], char *cmd);

#endif
