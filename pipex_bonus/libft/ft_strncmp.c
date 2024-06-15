/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrlinei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 05:34:03 by adrlinei          #+#    #+#             */
/*   Updated: 2023/10/15 15:16:57 by adrlinei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*us1;
	unsigned char	*us2;
	size_t			i;

	us1 = (unsigned char *)s1;
	us2 = (unsigned char *)s2;
	i = 0;
	if (!n)
		return (0);
	while ((i < n - 1) && (us1[i]) && (us2[i]))
	{
		if (us1[i] == us2[i])
			i++;
		else
			break ;
	}
	return (us1[i] - us2[i]);
}
//TAKES 2 STRINGS, S1 (TYPE CONST CHAR *) AND S2 (TYPE CONST CHAR *), IT
//ALSO TAKES A VARIABLE CALLED N (TYPE SIZE_T). THE FUNCTION CASTS BOTH
//STRINGS TO UNSIGNED CHARS, THEN CREATES AN ITERATOR TO TRAVERSE BOTH
//STRINGS, COMPARING EACH CHARACTER OF BOTH STRINGS UNTIL EITHER REACHES '\0',
//I REACHES (N - 1) OR THE CHARACTER BEING CHECKED IS DIFFERENT. IF A 
//DIFFERENT CHARACTER IS FOUND, THE RESULT OF THE DIFFERENCE FROM THE
//COMPARISON OF THEIR ASCII VALUES IS RETURNED.
//IF ALL CHARACTERS ARE THE SAME OR !N IS PASSED AS ARG, FUNCTION RETURNS 0.
