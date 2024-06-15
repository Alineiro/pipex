/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrlinei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 01:53:15 by adrlinei          #+#    #+#             */
/*   Updated: 2023/10/15 15:17:45 by adrlinei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}
//TAKES AN ASCII VALUE (TYPE INT) AND THEN CHECKS IF THAT VALUE IS
//UPPERCASE, THEN RETURNS THAT CHARACTER IN LOWERCASE IF ITS UPPERCASE,
//AND IF IT ISNT, IT RETURNS THE CHARACTER UNCHANGED.
