/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrlinei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 21:49:48 by adrlinei          #+#    #+#             */
/*   Updated: 2023/10/15 09:50:58 by adrlinei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
//TAKES THE LIST LST (TYPE T_LIST) AS ARG, AND RETURNS THE LAST NODE IN SAID
//LIST. TO DO SO, A LOOP IS CREATED THAT WILL ITERATE LST WHILE THE NEXT
//POINTER OF THE NEXT NODE DOESNT POINT TO NULL. WHEN THE LOOP IS EXITED, IT
//WILL MEAN LST HAS THE VALUE OF THE ACTUAL LAST NODE, AND WILL RETURN IT.
//IF !LST, NULL IS RETURNED AND FUNCTION ENDS.
/*int	main(void)
{
	char	*str1;
	char	*str2;
	char	*str3;
	t_list	*lst;
	t_list	*lastnode;
	
	str1 = "String 1";
	str2 = "String 2";
	str3 = "String 3";
	lst = NULL;
	ft_lstadd_front(&lst, ft_lstnew(str1));
	ft_lstadd_front(&lst, ft_lstnew(str2));
	ft_lstadd_front(&lst, ft_lstnew(str3));
	lastnode = ft_lstlast(lst);
	printf("Return of lstlast is: %s",(char *)lastnode->content);
}*/
