/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrlinei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 18:34:32 by adrlinei          #+#    #+#             */
/*   Updated: 2023/10/03 01:20:10 by adrlinei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
//TAKES AN ASCII VALUE (TYPE INT) AND THEN CHECKS IF THAT VALUE IS
//A DIGIT (0-9), THEN RETURNS 1 IF ITS A DIGIT OR 0 IF IT ISNT
