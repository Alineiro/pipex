/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrlinei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 00:37:51 by adrlinei          #+#    #+#             */
/*   Updated: 2023/10/03 01:57:03 by adrlinei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
//TAKES AN ASCII VALUE (TYPE INT) AND THEN CHECKS IF THAT VALUE IS
//PRINTABLE (BETWEEN ' ' AND '~'), THEN RETURNS 1 IF ITS PRINTABLE
//OR 0 IF IT ISNT
