/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrlinei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 18:39:50 by adrlinei          #+#    #+#             */
/*   Updated: 2023/10/03 01:50:45 by adrlinei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}
//TAKES AN ASCII VALUE (TYPE INT) AND THEN CHECKS IF THAT VALUE IS
//ALPHABETICAL OR NUMERIC, TO DO SO IT CALLS THE PREVIOUSLY CREATED
//FUNCTIONS FT_ISALPHA AND FT_ISDIGIT TTHEN RETURNS 1 IF ITS ALNUM
//OR 0 IF IT ISNT
