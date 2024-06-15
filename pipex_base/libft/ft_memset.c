/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrlinei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 00:47:10 by adrlinei          #+#    #+#             */
/*   Updated: 2023/10/15 15:19:12 by adrlinei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	unsigned char	val;
	size_t			i;

	ptr = (unsigned char *)b;
	val = (unsigned char)c;
	i = 0;
	while (len > 0)
	{
		ptr[i] = val;
		i++;
		len--;
	}
	return (ptr);
}
//A VALUE B (TYPE VOID *) IS PASSED AS AN ARGUMENT AND ITS VALUE IS CHANGED 
//WITH THE VALUE OF THE C VARIABLE (TYPE INT) FOR LEN (TYPE SIZE_T) BYTES OF 
//VALUE. THE FUNCTION CASTS THE B AND C VARIABLES INTO UNSIGNED CHARS AND 
//THEN PROCCEDS TO MODIFY THE CASTED B VARIABLE, WHEN LEN CHARACTERS ARE 
//MODIFIED, THE FUNCTION RETURNS THE RESULTING VARIABLE.
//THE DIFFERENCE BETWEEN MEMSET AND BZERO IS THAT MEMSET ALLOWS YOU TO 
//MODIFY B WITH ANY ASCII VALUE THAT YOU WANT, WHILE BZERO ONLY WITH 0.
