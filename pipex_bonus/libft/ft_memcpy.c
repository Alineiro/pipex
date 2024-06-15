/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrlinei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 21:22:25 by adrlinei          #+#    #+#             */
/*   Updated: 2023/10/15 15:20:41 by adrlinei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const unsigned char	*src_ptr;
	unsigned char		*dst_ptr;
	size_t				i;

	if (!src && !dst)
		return (NULL);
	src_ptr = (const unsigned char *)src;
	dst_ptr = (unsigned char *)dst;
	i = 0;
	while (i < n)
	{
		dst_ptr[i] = src_ptr[i];
		i++;
	}
	return (dst_ptr);
}
//A VALUE SRC (TYPE CONST VOID *) IS COPIED ONTO ANOTHER VARIABLE 
//DST (TYPE VOID *) FOR N (TYPE SIZE_T) BYTES OF CONTENT. THE FUNCTION CASTS 
//THE SRC AND DST VARIABLES INTO UNSIGNED CHAR * AND THEN PROCCEDS TO COPY 
//TO THE CASTED DST VARIABLE, WHEN LEN CHARACTERS ARE COPIED, THE FUNCTION 
//RETURNS THE RESULTING VARIABLE. IF SRC OR DST ARE NULL, THE FUNCTION 
//RETURNS NULL.
//THE DIFFERENCE BETWEEN MEMCPY AND MEMMOVE IS THAT MEMCPY ISNT DESIGNED
//TO HANDLE SITUATIONS WHERE THE MEMORY OF SRC AND DST OVERLAP, WHILE 
//MEMMOVE CAN BY COPYING FROM THE END WHEN THEY DO OVERLAP.
