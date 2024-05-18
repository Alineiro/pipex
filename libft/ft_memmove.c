/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrlinei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 00:24:50 by adrlinei          #+#    #+#             */
/*   Updated: 2023/10/17 16:36:03 by adrlinei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*src_ptr;
	unsigned char	*dst_ptr;

	if (!src && !dst)
		return (NULL);
	src_ptr = (unsigned char *)src;
	dst_ptr = (unsigned char *)dst;
	if (dst_ptr > src_ptr)
	{
		while (len-- > 0)
			dst_ptr[len] = src_ptr[len];
	}
	else
		ft_memcpy(dst_ptr, src_ptr, len);
	return (dst_ptr);
}
//A VALUE SRC (TYPE CONST VOID *) IS COPIED ONTO ANOTHER VARIABLE 
//DST (TYPE VOID *) FOR LEN (TYPE SIZE_T) BYTES OF CONTENT. THE FUNCTION CASTS 
//THE SRC AND DST VARIABLES INTO UNSIGNED CHAR * AND THEN PROCCEDS TO COPY 
//TO THE CASTED DST VARIABLE, WHEN LEN CHARACTERS ARE COPIED, THE FUNCTION 
//RETURNS THE RESULTING VARIABLE. IF SRC OR DST ARE NULL, THE FUNCTION 
//RETURNS NULL.
//THE DIFFERENCE BETWEEN MEMCPY AND MEMMOVE IS THAT MEMCPY ISNT DESIGNED
//TO HANDLE SITUATIONS WHERE THE MEMORY OF SRC AND DST OVERLAP, WHILE 
//MEMMOVE CAN BY COPYING FROM THE END WHEN THEY DO OVERLAP.
