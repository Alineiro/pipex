/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrlinei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 16:36:24 by adrlinei          #+#    #+#             */
/*   Updated: 2023/10/18 04:43:12 by adrlinei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*current;

	if (!lst || !f)
		return ;
	current = lst;
	while (current)
	{
		f(current->content);
		current = current->next;
	}
}
//TAKES A LIST LST (TYPE (T_LIST *), AND A FUNCTION F (VOID F(VOID *)), THIS
//WILL BE THE FUNCTION THATS APPLIED TO EACH NODE OF LST. THE FUNCTION CREATES
//A NEW VARIABLE CURRENT (TYPE T_LIST *), LST IS ASSIGNED TO CURRENT. AND IT
//ENTERS A LOOP. INSIDE, THE FUNCTION F WILL BE APPLIED TO EACH NODE UNTIL
//CURRENT REACHES NULL, THEN IT WILL EXIT.
//IF !LST OR !F, THE FUNCTION RETURNS WITHOUT DOING ANYTHING. 
//DIFFERENCE BETWEEN LSTMAP AND LSTITER IS THAT LSTMAP CREATES A NEW LIST
//THATS MALLOCED AND RETURNS SAID LIST, WITHOUT MODIFYING THE ORIGINAL LIST,
//MEANWHILE STRITER MODIFIES THE ORIGINAL LIST.
