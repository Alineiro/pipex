/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrlinei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 08:50:57 by adrlinei          #+#    #+#             */
/*   Updated: 2023/10/15 12:36:12 by adrlinei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	lcount;

	lcount = 0;
	if (!lst)
		return (0);
	while (lst)
	{
		lst = lst->next;
		lcount++;
	}
	return (lcount);
}
//TAKES THE LIST LST (TYPE T_LIST) AS ARG AND GETS THE TOTAL LENGTH OF LST
//(HOW MANY NODES ARE THERE). FIRST A NEW VAR CALLED LCOUNT (TYPE INT) IS
//CREATED, THEN A LOOP IS ENTERED THAT WILL ITERATE THE LIST WHILE THE LST
//POINTER ISNT NULL (MEANING IT HAS REACHED THE END OF THE LIST). INSIDE THE
//LOOP, LST WILL BE UPDATED TO POINT TO THE NEXT NODE OF LST AND WILL ADD ONE
//TO LCOUNT EVERY ITERATION. WHEN IT EXITS THE LOOP, LCOUNT IS RETURNED.
//IF !LST, THE FUNCTION RETURNS 0 AND ENDS.
