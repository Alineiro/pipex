/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrlinei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 04:54:42 by adrlinei          #+#    #+#             */
/*   Updated: 2023/10/15 15:17:09 by adrlinei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!needle[0])
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && haystack[i + j] && i + j < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *)haystack + i);
			j++;
		}
		i++;
	}
	return (0);
}
//TAKES 2 STRINGS CALLED HAYSTACK AND NEEDLE (TYPE CONST CHAR *), AND LEN
//(TYPE SIZE_T). FIRST TWO ITERATORS ARE CREATED, ONE TO TRAVERSE HAYSTACK, 
//AND THE OTHER ONE TO TRAVERSE NEEDLE. THE FUNCTION TRAVERSES HAYSTACK UNTIL
//IT REACHES '\0', I REACHES LEN OR THE CURRENT CHARACTER OF BOTH STRINGS ARE
//THE SAME. IF THE CHARACTERS MATCH, THE FUNCTION ENTERS A LOOP THATS TRUE 
//FOR AS LONG AS THE CHARACTERS ARE THE SAME. IF THE CHARACTER AFTER THE
//CURRENT POSITION OF NEEDLE IS '\0', THEN NEEDLE WAS FOUND, AND THE FUNCTION
//RETURNS A POINTER THATS AIMING TO THE POSITION OF HAYSTACK WHERE THE FIRST
//MATCH WITH NEEDLE WAS FOUND.
//IF NEEEDLE ISNT FOUND, THE ENTIRE HAYSTACK IS RETURNED, REGARDLESS OF LEN.
