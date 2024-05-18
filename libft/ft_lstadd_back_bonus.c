/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrlinei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 05:19:34 by adrlinei          #+#    #+#             */
/*   Updated: 2023/10/15 15:09:08 by adrlinei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	last = NULL;
	if (!new)
		return ;
	if (!lst[0])
	{
		lst[0] = new;
		return ;
	}
	else
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
}
//TAKES LST (TYPE T_LIST **) A POINTER THAT POINTS TO A LINKED LIST, AND NEW
//(TYPE T_LIST *), WHICH IS THE NODE THAT WILL BE ADDED TO THE LIST LST. THE
//FUNCTION ASSIGNS NEW TO THE LAST POSITIION OF THE LIST LST. TO DO SO, FIRST
//IT DECLARES A NEW VARIABLE LAST (TYPE T_LIST), INITIALIZING IT AS NULL.
//FIRST !LST[0] IS CHECKED (MEANING THAT THE LIST IS CURRENTLY EMPTY), IF SO,
//NEW IS ASSIGNED TO LST[0], AND THE FUNTION RETURNS. IF THATS NOT MET, THE
//FUNCTION FT_LSTLAST IS CALLED AND ITS RETURN IS ASSIGNED TO LAST, THIS
//GIVES LAST THE VALUE OF THE LAST NODE OF LST, AFTER THAT, THE NEXT OF LAST
//IS POINTED TO NEW, MAKING NEW THE LAST NODE OF LST.
//IF !NEW THE FUNCTION RETURNS WITHOUT DOING ANYTHING.
