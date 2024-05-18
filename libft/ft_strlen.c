/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrlinei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 18:13:27 by adrlinei          #+#    #+#             */
/*   Updated: 2023/10/15 15:19:04 by adrlinei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
//GETS THE LEN (SIZE_T TYPE) OF THE STRING THATS PASSED AS AN
//ARGUMENT (TYPE CONST CHAR *), IT USES AN ITERATOR (TYPE SIZE_T) TO
//TRAVERSE THE STRING UNTIL THE END AND THEN RETURNS THE ITERATOR
