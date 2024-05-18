/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrlinei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 19:29:39 by adrlinei          #+#    #+#             */
/*   Updated: 2023/10/18 18:11:58 by adrlinei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*dst;
	t_list	*newn;
	void	*mapc;

	dst = NULL;
	newn = NULL;
	mapc = NULL;
	if (!lst)
		return (NULL);
	while (lst)
	{
		mapc = f(lst->content);
		if (!mapc)
			return (del(mapc), ft_lstclear(&dst, del), NULL);
		newn = ft_lstnew(mapc);
		if (!newn)
			return (del(mapc), ft_lstclear(&dst, del), NULL);
		mapc = NULL;
		ft_lstadd_back(&dst, newn);
		newn = newn->next;
		lst = lst->next;
	}
	return (dst);
}
//TAKES A LIST LST (TYPE T_LIST *), A FUNCTION F (VOID *F(VOID *)), WHICH WILL
//BE THE FUNCTION APPLIED TO EACH NODE OF LST, AND ANOTHER FUNCTION DEL
//(VOID DEL(VOID *)), USED TO CLEAR NODES. FIRST TWO TYPE (T_LIST *) VARS ARE
//CREATED, DST (THE MODIFIED LIST THAT WILL BE RETURNED), AND NEWN (WHICH WILL
//STORE EACH MODIFIED NODE THAT WILL BE ADDED TO THE DST LIST), MAPC (TYPE
//VOID *) IS ALSO DECLARED (TO TEMPORARILY STORE THE RESULT OF APPLYING F TO
//ACTUAL LSTS CONTENT, MAPC WILL BE THEN USED TO CREATE NEWN). THE FUNCTION
//ENTERS A LOOP THAT WILL BE TRUE WHILE LST ISNT NULL, INSIDE, MAPC IS GIVEN
//THE RESULT OF APPLYING F TO THE CURRENT NODES CONTENT OF LST. THEN MAPC
//IS USED TO CREATE A NODE STORED IN NEWN, AFTER THAT MAPC IS RESET TO NULL.
//LATER, SAID NODE IS ADDED TO THE END OF DST LIST, AND DST AND NEWN ADVANCE
//TO THE NEXT NODE. WHEN THE LOOP ENDS DST IS RETURNED.
//IF !LST, NULL IS RETURNED. IF !MAPC OR !NEWN (MEANING THERE WAS AN ERROR
//IN THE ALLOCATION PROCESS OR WHILE APPLYING THE FUNCTION F), THE DEL
//FUNCTION IS APPLIED TO CLEAR THE MEMORY OF MAPC, THEN THE FUNCTION
//FT_LSTCLEAR IS CALLED ON THE LIST DST TO CLEAR ALL OF THE NODES THAT HAD
//BEEN ALLOCATED SO FAR, AND FINALLY NULL IS RETURNED.
//DIFFERENCE BETWEEN LSTMAP AND LSTITER IS THAT LSTMAP CREATES A NEW LIST
//THATS MALLOCED AND RETURNS SAID LIST, WITHOUT MODIFYING THE ORIGINAL LIST,
//MEANWHILE STRITER MODIFIES THE ORIGINAL LIST.
