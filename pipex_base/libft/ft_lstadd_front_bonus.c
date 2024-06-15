/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrlinei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 08:34:52 by adrlinei          #+#    #+#             */
/*   Updated: 2023/10/15 15:09:16 by adrlinei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = lst[0];
	lst[0] = new;
}
//TAKES LST (TYPE T_LIST **) A POINTER THAT POINTS TO A LINKED LIST, AND NEW
//(TYPE T_LIST *), WHICH IS THE NODE THAT WILL BE ADDED TO THE LIST LST. THE
//FUNCTION ASSIGNS NEW TO THE FIRST POSITION OF LST (LST[0]), TO DO THIS,
//THE NEXT OF NEW IS UPDATED TO POINT TO LST[0] (THE FIRST NODE). THEN,
//LST[0] IS UPDATED TO POINT TO THE NEW NODE.
//IF !LST OR !NEW THE FUNCTION RETURNS WITHOUT DOING ANYTHING.
