/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrlinei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 02:50:13 by adrlinei          #+#    #+#             */
/*   Updated: 2023/10/17 01:52:49 by adrlinei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*dst;
	size_t	len;

	len = nmemb * size;
	if (nmemb == 0)
	{
		dst = malloc(0);
		return (dst);
	}
	if (!nmemb && !size)
		return (NULL);
	dst = malloc(len);
	if (!dst)
		return (NULL);
	ft_bzero(dst, len);
	return (dst);
}
//TAKES 2 SIZE_T VARIABLES, NMEMB IS THE NUMBER OF ELEMENTS THAT WILL BE
//ALLOCATED, AND SIZE REPRESENTS THE SIZE OF EACH ELEMENT (TO ACCEPT ANY
//TYPE OF VALUE). FIRST, THE FUNCTION CREATES A DST VARIABLE (TYPE VOID *)
//AND LEN (TYPE SIZE_T). LEN IS GIVEN THE VALUE OF MULTIPLYING NMEMB BY SIZE
//TO GET THE TOTAL AMOUNT BYTES NEEDED TO ALLOCATE, THEN A CALL TO MALLOC IS
//DONE USING LEN AS ARG, AND THAT RESULT IS STORED IN THE DST VAR. FINALLY THE
//BZERO FUNCTION IS CALLED ON DST TO SET ALL OF DSTS MEMORY TO 0.
//IF NMEMB IS 0, THE DST VARIABLE IS RETURNED WITH A CALL TO MALLOC WITH 0
//AS ARG. IF !NMEMB && !SIZE OR THE MALLOC OF DST FAILS, NULL IS RETURNED.
