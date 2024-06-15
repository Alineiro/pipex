/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrlinei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 05:27:09 by adrlinei          #+#    #+#             */
/*   Updated: 2023/10/15 15:16:22 by adrlinei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*dst;
	size_t	i;
	size_t	len;

	if (!s || !f)
		return (NULL);
	i = 0;
	len = ft_strlen(s) + 1;
	dst = (char *)malloc(len * sizeof(char));
	if (!dst)
		return (NULL);
	while (s[i])
	{
		dst[i] = f(i, s[i]);
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
//TAKES S (TYPE CHAR CONST *) AND A POINTER TO A FUNCTION (CHAR *F(UNSIGNED
//INT, CHAR)). THE FUNCTION CREATES A NEW VARIABLE DST (TYPE CHAR *), GETS S
//LEN, AND MALLOCS DST WITH SAID LEN AS ARG. THEN THE FUNCTION IS APPLIED TO
//EACH CHARACTER OF S AND ITS RETURN IS ASSIGNED TO DST UNTIL S REACHES '\0'.
//THEN DST IS NULL TERMINATED AND RETURNED.
//DIFFERENCE BETWEEN STRMAPI AND STRITERI IS THAT STRMAPI RETURNS A MALLOCED
//STRING WITH THE RESULT OF APPLYING FUNCTION F TO S, AND STRITERI MODIFIES
//S DIRECTLY.
//IF MALLOC ALLOCATION FAIL, NULL IS RETURNED.
