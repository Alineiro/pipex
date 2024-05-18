/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrlinei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 06:38:27 by adrlinei          #+#    #+#             */
/*   Updated: 2023/10/14 05:27:08 by adrlinei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
//WRITES C (TYPE CHAR) TO THE GIVEN FILE DESCRIPTOR (TYPE INT). WORKS LIKE A 
//NORMAL PUTCHAR BUT WRITES TO FD INSTEAD OF 1 BY DEFAULT. AN FD TELLS THE
//SYSTEM FROM WHERE IT SHOULD READ OR WRITE INFORMATION.
