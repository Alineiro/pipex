/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrlinei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 06:01:00 by adrlinei          #+#    #+#             */
/*   Updated: 2023/10/15 15:15:46 by adrlinei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (!size)
		return (ft_strlen(src));
	while ((i < size - 1) && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
//THE STRING SRC (TYPE CONST CHAR *) IS COPIED TO STRING DST (TYPE CHAR *)
//FOR SIZE (TYPE SIZE_T) BYTES OF DATA. THE FUNCTION TRAVERSES BOTH STRINGS
//WHILE COPYING SRC TO DST, UNTIL SRC REACHES '\0' OR THE ITERATOR
//REACHES (SIZE - 1). THEN IT ADDS THE '\0' TERMINATOR, AND RETURNS THE LEN
//OF SRC.
//IT WILL ALWAYS COPY 1 BYTE LESS THAN SIZE TO ENSURE THERES SPACE FOR
//THE '\0' TERMINATOR. IF !SIZE, THE FUNCTION RETURNS THE LEN OF SRC AND
//DOESNT COPY ANYTHING.
