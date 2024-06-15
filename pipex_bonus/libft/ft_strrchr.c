/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrlinei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 02:30:33 by adrlinei          #+#    #+#             */
/*   Updated: 2023/10/15 15:11:17 by adrlinei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	match;
	int		i;

	match = (char)c;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == match)
			return ((char *)(s + i));
		else
			i--;
	}
	return (NULL);
}
//TAKES A STRING S (TYPE CONST CHAR *S) AND AN ASCII VALUE C (TYPE INT).
//THE FUNCTION CASTS THE C VARIABLE TO A CHAR AND CREATES AN ITERATOR THAT
//IS ASSIGNED THE LEN OF S. THE FIRST CHARACTER THATS CHECKED IS THE '\0' 
//CHARACTER, IF THAT ISNT THE C CHARACTER, THEN THE FUNCTION TRAVERSES THE S 
//STRING STARTING FROM THE END, UNTIL IT FINDS THE CHARACTER, AND RETURNS A 
//POINTER TO THE FOUND CHARACTER. IF IT REACHES THE START OF S AND THE 
//CHARACTER WASNT FOUND, THE FUNCTION RETURNS NULL.
//THE DIFFERENCE BETWEEN STRCHR AND STRRCHR IS THAT STRRCHR BEGINS CHECKING
//FROM THE END OF THE STRING.
