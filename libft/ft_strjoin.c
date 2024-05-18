/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrlinei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 04:42:03 by adrlinei          #+#    #+#             */
/*   Updated: 2023/10/15 15:11:45 by adrlinei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	dst = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!dst)
		return (NULL);
	while (s1[i])
	{
		dst[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		dst[i] = s2[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst);
}
//TAKES 2 STRINGS S1 AND S2 (TYPE CHAR CONST *), AND RETURNS A NEW VARIABLE
//THATS THE RESULT OF CONCATENATING BOTH STRINGS USING MALLOC. FIRST THE
//FUNCTION CREATES A DST (TYPE CHAR *) VARIABLE, WHERE THE RESULTING STRING
//WILL BE STORED AND THEN 2 ITERATORS (TYPE SIZE_T). THEN IT MALLOCS DST
//USING THE LEN OF S1 AND S2 AS AN ARGUMENT. IF THE ALLOCATION FAILS, NULL
//IS RETURNED. AFTER THAT THE FUNCTION COPIES S1 TO DST AND LATER S2 TO DST,
//FINALLY DST IS NULL TERMINATED AND RETURNED.
