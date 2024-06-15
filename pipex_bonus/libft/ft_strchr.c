/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrlinei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 01:57:41 by adrlinei          #+#    #+#             */
/*   Updated: 2023/10/15 15:11:12 by adrlinei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	match;
	int		i;

	match = (char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == match)
			return ((char *)(s + i));
		else
			i++;
	}
	if (s[i] == match)
		return ((char *)(s + i));
	else
		return (NULL);
}
//TAKES A STRING S (TYPE CONST CHAR *S) AND AN ASCII VALUE C (TYPE INT).
//THE FUNCTION CASTS THE C VARIABLE TO A CHAR AND CREATES AN ITERATOR,
//THEN THE FUNCTION TRAVERSES THE S STRING UNTIL IT FINDS THE CHARACTER,
//AND RETURNS A POINTER TO THE FOUND CHARACTER. IF IT REACHES THE END OF S
//AND THE CHARACTER WASNT FOUND, FIRST IT CHECKS IF THE ACTUAL POSITION IS
//THE CHARACTER (TO CHECK IF THE C CHARACTER IS '\0'), AND IF IT ISNT, THE
//FUNCTION RETURNS NULL.
//THE DIFFERENCE BETWEEN STRCHR AND STRRCHR IS THAT STRRCHR BEGINS CHECKING
//FROM THE END OF THE STRING.
