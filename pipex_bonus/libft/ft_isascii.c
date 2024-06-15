/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrlinei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 00:40:34 by adrlinei          #+#    #+#             */
/*   Updated: 2023/10/03 01:21:30 by adrlinei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
//TAKES AN ASCII VALUE (TYPE INT) AND THEN CHECKS IF THAT VALUE IS
//AN ASCII VALUE (0-127), THEN RETURNS 1 IF ITS ASCII
//OR 0 IF IT ISNT
