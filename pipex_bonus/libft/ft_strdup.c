/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrlinei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 01:23:39 by adrlinei          #+#    #+#             */
/*   Updated: 2023/10/18 18:14:56 by adrlinei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dst;
	size_t	i;

	i = 0;
	dst = (char *)malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (!dst)
		return (NULL);
	while (s1[i])
	{
		dst[i] = s1[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
//TAKES A STRING CALLED S1 (TYPE CONST CHAR *) AND DUPLICATES IT USING
//MALLOC, THEN RETURNS THE DUPLICATED STRING. FIRST 2 VARIABLES ARE CREATED,
//ONE CALLED DST (TYPE CHAR *), WHICH WILL STORE THE DUPLICATED STRING, AND
//THEN AN ITERATOR (TYPE SIZE_T). THE FUNCTION USES MALLOC TO ALLOCATE
//MEMORY TO DST USING THE LEN OF S1 AS AN ARGUMENT (IF THE ALLOCATION FAILS,
//NULL IS RETURNED). AFTER THAT, THE CONTENT OF S1 IS COPIED TO DST, AND
//THE STRING IS NULL TERMINATED. FINALLY, DST IS RETURNED.
