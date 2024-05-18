/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrlinei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 01:00:00 by adrlinei          #+#    #+#             */
/*   Updated: 2023/10/15 15:19:20 by adrlinei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	int				i;

	ptr = (unsigned char *)s;
	i = 0;
	while (n > 0)
	{
		ptr[i] = 0;
		i++;
		n--;
	}
}
//A VALUE s (TYPE VOID *) IS PASSED AS AN ARGUMENT AND ITS VALUE IS CHANGED 
//WITH 0 FOR N (TYPE SIZE_T) BYTES OF VALUE. THE FUNCTION CASTS THE S VARIABLE 
//INTO UNSIGNED CHAR * AND THEN PROCCEDS TO MODIFY IT, WHEN LEN CHARACTERS ARE 
//MODIFIED, THE FUNCTION RETURNS THE RESULTING VARIABLE.
//THE DIFFERENCE BETWEEN MEMSET AND BZERO IS THAT MEMSET ALLOWS YOU TO 
//MODIFY S WITH ANY ASCII VALUE THAT YOU WANT, WHILE BZERO ONLY WITH 0.
