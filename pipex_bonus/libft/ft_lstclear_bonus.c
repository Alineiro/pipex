/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrlinei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 16:03:30 by adrlinei          #+#    #+#             */
/*   Updated: 2023/10/18 14:22:00 by adrlinei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	temp = NULL;
	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	*lst = NULL;
}
//TAKES A LIST LST (TYPE T_LIST *) AND A FUNCTION DEL (VOID DEL(VOID *)), THE
//FUNCTION THAT WILL BE USED TO DELETE THE CONTENT OF LST. FIRST TEMP IS
//CREATED (TYPE T_LIST *) AND ASSIGNED TO NULL, THEN A LOOP IS ENTERED THAT
//WILL BE TRUE WHILE LST ISNT NULL. INSIDE THIS LOOP, TEMP IS ASSIGNED THE
//NEXT NODE OF LST, THEN FUNCTION FT_LSTDELONE IS CALLED USING THE DEL
//FUNCTION TO FREE THE NODE, AND LST IS ASSIGNED TEMP, TO POINT TO THE NEXT
//NODE OF LST. WHEN THE LOOP IS EXITED, LST IS SET TO NULL.
//IF !LST OR !DEL, THE FUNCTION RETURNS WITHOUT DOING ANYTHING.
