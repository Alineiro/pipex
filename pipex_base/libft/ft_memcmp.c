/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrlinei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 23:10:37 by adrlinei          #+#    #+#             */
/*   Updated: 2023/10/15 15:10:25 by adrlinei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			i;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	i = 0;
	if (!n)
		return (0);
	while ((i < n - 1) && (ptr1[i] == ptr2[i]))
		i++;
	return (ptr1[i] - ptr2[i]);
}
//TAKES 2 VALUES, S1 (TYPE CONST VOID *) AND S2 (TYPE CONST VOID *), IT
//ALSO TAKES A VARIABLE CALLED N (TYPE SIZE_T). THE FUNCTION CASTS BOTH
//VALUES TO UNSIGNED CHARS, THEN CREATES AN ITERATOR TO TRAVERSE BOTH
//CASTED VARIABLES, COMPARING EACH CHARACTER OF BOTH CASTED STRINGS UNTIL 
//I REACHES (N - 1) OR THE CHARACTER BEING CHECKED IS DIFFERENT. IF A 
//DIFFERENT CHARACTER IS FOUND, THE RESULT OF THE DIFFERENCE FROM THE
//COMPARISON OF THEIR ASCII VALUES IS RETURNED.
//IF ALL CHARACTERS ARE THE SAME OR !N IS PASSED AS ARG, FUNCTION RETURNS 0.
