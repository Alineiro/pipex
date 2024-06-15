/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrlinei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 04:06:53 by adrlinei          #+#    #+#             */
/*   Updated: 2023/10/31 15:55:26 by adrlinei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	int		i;

	i = 0;
	if (!s || !len || (start >= ft_strlen(s)))
		return (ft_strdup(""));
	if (len > (ft_strlen(s) - (size_t)start))
		len = ft_strlen(s) - (size_t)start;
	dst = (char *)malloc((len + 1) * sizeof(char));
	if (!dst)
		return (NULL);
	while ((len > 0) && (s[start]))
	{
		dst[i] = s[start];
		i++;
		start++;
		len--;
	}
	dst[i] = '\0';
	return (dst);
}
//TAKES A STRING S (TYPE CHAR CONST *), START (TYPE UNSIGNED INT) AND LEN
//(TYPE SIZE_T). THE FUNCTION EXTRACTS A STRING FROM S THAT BEGINS FROM
//START AND ENDS AT LEN. FIRST TWO VARIABLES ARE CREATED, DST (TYPE CHAR *),
//WHERE THE SUBSTRING WILL BE STORED AND I (TYPE INT), AN ITERATOR. AFTER
//THE DECLARATION, THE LEN VARIABLE IS ADJUSTED IF NECESSARY TO ENSURE IT DOES
//NOT EXCEED THE END OF S. THEN, IT USES LEN AS AN ARGUMENT TO MALLOC FOR DST,
//AND COPIES FROM S IN THE POSITION OF START, TO DST UNTIL S REACHES '\0' OR
//LEN REACHES 0. FINALLY DST IS NULL TERMINATED AND RETURNED.
//IF !S, !LEN OR START IS BIGGER THAN S LEN, THE FUNCTION RETURNS AN EMPTY
//STRING. IF MALLOC ALLOCATION FAILS, RETURNS NULL.
