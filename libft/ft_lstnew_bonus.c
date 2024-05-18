/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrlinei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 01:47:51 by adrlinei          #+#    #+#             */
/*   Updated: 2023/10/15 09:50:28 by adrlinei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newn;

	newn = (t_list *)malloc(sizeof(t_list));
	if (!newn)
		return (newn = NULL, NULL);
	newn->content = content;
	newn->next = NULL;
	return (newn);
}
//TAKES CONTENT (TYPE VOID *), AND ASSIGNS THAT DATA TO A NEWLY CREATED NODE
//OF A LINKED LIST, THEN RETURNS A POINTER TO SAID NODE. FIRST, A VARIABLE
//NEWN (TYPE T_LIST) IS CREATED, THIS IS THE NODE THAT WILL BE RETURNED.
//THIS VARIABLE IS MALLOCED USING SIZEOF(T_LIST) AS ARG. THEN THE VAR CONTENT
//THAT WAS PASSED AS ARG IS ASSIGNED TO THE CONTENT OF THE NODE AND SETS
//THE NEXT MEMBER OF THE LIST TO NULL, BECAUSE ITS THE LAST NODE OF THE LIST,
//SINCE ONLY ONE NODE WAS CREATED, THEN NEWN IS RETURNED.
//IF MALLOC FAILS, NEWN IS ASSIGNED NULL AND NULL IS RETURNED.
