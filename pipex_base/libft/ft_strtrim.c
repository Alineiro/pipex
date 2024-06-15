/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrlinei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 08:14:02 by adrlinei          #+#    #+#             */
/*   Updated: 2023/10/26 16:00:29 by adrlinei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dst;
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(s1) - 1;
	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	while (ft_strchr(set, s1[i]) && s1[i])
		i++;
	while (ft_strchr(set, s1[j]) && s1[i])
		j--;
	dst = ft_substr(s1, i, (j - i + 1));
	return (dst);
}
//TAKES 2 STRINGS S1 AND SET (TYPE CHAR CONST *). THE FUNCTION FINDS SET AT
//THE BEGGINING AND END OF S1 USING THE STRCHAR FUNCTION, AND RETURNS A NEWLY
//CREATED MALLOCED STRING WITH THE MATCHING CHARACTERS REMOVED FROM IT. FIRST,
//THE FUNCTION CREATES A DST VARIABLE (TYPE CHAR *) THAT WILL CONTAIN THE
//TRIMED STRING, AND 2 ITERATORS (TYPE SIZE_T), I WILL SEARCH FOR MATCHES
//STARTING FROM POSTITION 0, AND J WILL LOOK FOR MATCHES STARTING FROM THE END
//OF S1. WHEN THE NUMBER OF MATCHES FROM BOTH SIDES IS FOUND, THE RESULTING
//STRING IS COPIED ON TO DST BY CALLING TO SUBSTR USING I AS START, AND THE
//RESULT OF (J - I + 1) AS LEN. AFTER THAT, DST IS RETURNED.
//IF !S1 NULL IS RETURNED (BECAUSE THERE IS NOWHERE TO LOOK FOR SET), AND IF
//!SET, A DUPLICATED STRING WITH THE VALUE OF S1 IS RETURNED (BECAUSE THERES
//NOTHING TO LOOK FOR IN S1.
