/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrlinei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 05:36:35 by adrlinei          #+#    #+#             */
/*   Updated: 2023/10/15 15:15:01 by adrlinei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
//TAKES S (TYPE CHAR *) AND A POINTER TO A FUNCTION (VOID *F(UNSIGNED INT, 
//CHAR*)). THE FUNCTION APPLIES THE F FUNCTION TO EACH CHARACTER OF S UNTIL
//S REACHES '\0'.
//THE DIFFERENCE BETWEEN STRMAPI AND STRITERI IS THAT STRMAPI RETURNS A
//MALLOCED STRING WITH THE RESULT OF APPLYING FUNCTION F TO S, AND STRITERI
//MODIFIES S DIRECTLY.
