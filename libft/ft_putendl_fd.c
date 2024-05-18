/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrlinei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 07:18:04 by adrlinei          #+#    #+#             */
/*   Updated: 2023/10/14 05:29:39 by adrlinei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}
//WRITES S (TYPE CHAR *) TO THE GIVEN FILE DESCRIPTOR (TYPE INT) AND THEN
//WRITES A NEWLINE TO SAID FD. AN FD TELLS THE SYSTEM FROM WHERE IT SHOULD 
//READ OR WRITE INFORMATION.
