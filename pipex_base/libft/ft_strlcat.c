/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrlinei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 07:23:46 by adrlinei          #+#    #+#             */
/*   Updated: 2023/10/15 15:13:16 by adrlinei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;

	i = -1;
	j = 0;
	if (!size && !dst)
		return (0);
	dst_len = ft_strlen(dst);
	while (dst[j])
		j++;
	if (size <= j)
		return (ft_strlen(src) + size);
	while (src[++i] && i < (size - j - 1))
		dst[j + i] = src[i];
	dst[j + i] = '\0';
	return (dst_len + ft_strlen(src));
}
//THE STRING SRC (TYPE CONST CHAR *) IS CONCATENATED TO THE STRING DST 
//(TYPE CHAR *) FOR SIZE (TYPE SIZE_T) BYTES OF DATA. THE FUNCTION FIRST
//CREATES 3 ITERATORS (TYPE SIZE_T) TO GET THE LEN OF DST, THE END OF DST, 
//AND TRAVERSE BOTH STRINGS. THE FUNCTION TRAVERSES BOTH STRINGS WHILE 
//CONCATENATING SRC TO DST, UNTIL SRC REACHES '\0' OR THE ITERATOR
//REACHES (SIZE - J - 1). THEN IT ADDS THE '\0' TERMINATOR, AND RETURNS
//THE LEN OF SRC + LEN OF DST (THE STRING IT CONCATENATED).
//IF BOTH !SIZE AND !DST, THE FUNCTION RETURNS 0, AND DOESNT CONCATENATE. AND
//IF SIZE VARIABLE IS SMALLER THAN THE LEN OF DST, THE FUNCTION RETURNS
//LEN OF SRC + SIZE VARIABLE (THE LEN OF THE STRING IT TRIED TO CONCATENATE),
//BUT IT DOESNT CONCATENATE ANYTHING.
