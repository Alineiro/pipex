/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrlinei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 07:08:13 by adrlinei          #+#    #+#             */
/*   Updated: 2023/10/14 05:28:23 by adrlinei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}
//WRITES S (TYPE CHAR *) TO THE GIVEN FILE DESCRIPTOR (TYPE INT). WORKS LIKE A 
//NORMAL PUTSTR BUT WRITES TO FD INSTEAD OF 1 BY DEFAULT. AN FD TELLS THE
//SYSTEM FROM WHERE IT SHOULD READ OR WRITE INFORMATION.
