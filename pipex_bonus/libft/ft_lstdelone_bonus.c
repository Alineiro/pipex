/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrlinei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 06:04:45 by adrlinei          #+#    #+#             */
/*   Updated: 2023/10/18 04:42:56 by adrlinei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!del)
		return ;
	if (lst)
	{
		del(lst->content);
		free(lst);
	}
}
//TAKES A LIST LST (TYPE T_LIST *), AND A FUNCTION DEL (VOID DEL(VOID *)),
//WHICH WILL BE USED TO CLEAR THE GIVEN NODE. INSIDE THE FUNCTION, DEL IS
//APPLIED TO THE CONTENT OF THE CURRENT NODE OF LST, AND AFTER THAT SAID NODE
//IS FREED.
//IF !LST OR !DEL THE FUNCTION RETURNS WITHOUT DOING ANYTHING.
