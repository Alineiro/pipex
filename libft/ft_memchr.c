/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrlinei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 12:52:24 by adrlinei          #+#    #+#             */
/*   Updated: 2023/10/17 02:22:05 by adrlinei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	val;
	size_t			i;

	ptr = (unsigned char *)s;
	val = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == val)
			return (ptr + i);
		i++;
	}
	return (NULL);
}
//TAKES A VALUE S (TYPE CONST VOID *S) AND AN ASCII VALUE C (TYPE INT), IT 
//ALSO PASSES A VARIABLE CALLED N (TYPE SIZE_T). THE FUNCTION CASTS S AND
//C TO UNSIGNED CHARS AND CREATES AN ITERATOR, THEN THE FUNCTION TRAVERSES 
//THE CASTED S VARIABLE UNTIL IT FINDS THE CASTED C CHARACTER, OR I REACHES
//N. IF IT FINDS C, THE FUNCTION RETURNS A POINTER TO THE FOUND CHARACTER.
//AND RETURNS A POINTER TO THE FOUND CHARACTER. IF IT DOESNT FIND C, THE
//FUNCTION RETURNS NULL.
