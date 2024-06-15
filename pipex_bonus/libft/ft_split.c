/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrlinei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 08:08:41 by adrlinei          #+#    #+#             */
/*   Updated: 2023/10/22 06:16:00 by adrlinei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t	i;
	size_t	bl;
	size_t	words;

	i = 0;
	bl = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			if (!bl)
			{
				bl = 1;
				words++;
			}
		}
		else
			bl = 0;
		i++;
	}
	return (words);
}

static void	ft_free_arr(char **arr, size_t j)
{
	size_t	i;

	i = 0;
	while (i < j)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

static char	**ft_arr_alloc(char **arr, const char *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			start = i;
			while (s[i] != c && s[i])
				i++;
			arr[j] = ft_substr(s, start, i - start);
			if (!arr[j])
			{
				ft_free_arr(arr, j);
				return (NULL);
			}
			j++;
		}
	}
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	words;

	if (!s)
		return (NULL);
	words = ft_count_words(s, c);
	arr = (char **)ft_calloc((words + 1), sizeof(char *));
	if (!arr)
		return (NULL);
	return (ft_arr_alloc(arr, s, c));
}
//TAKES A STRING S (TYPE CHAR CONST *), AND A CHAR (TYPE CHAR). THE FUNCTION
//RETURNS A NEWLY CREATED AND MALLOCED ARRAY (TYPE CHAR **), THATS CREATED
//FROM DIVIDING S INTO SEVERAL SUBSTRINGS, A SUBSTRING IS CREATED EACH TIME
//THE C DELIMITER IS FOUND IN S (IF ITS IS FOUND REPEATEDLY, REPETITIONS
//ARE IGNORED. IF THE CHARACTER IS FOUND AT THE START OF S, IT IS IGNORED).
//THE FUNCTION CREATES A VARIABLE CALLED ARR (TYPE CHAR **) WHICH WILL STORE
//THE ARRAY THAT WILL BE RETURNED, AND THEN IT DECLARES WORDS (TYPE SIZE_T)
//THAT WILL BE USED TO GET THE TOTAL AMOUNT OF SUBSTRINGS. FIRST, WORDS IS
//GIVEN THE VALUE OF THE RETURN OF FT_COUNT_WORDS (TAKES S AND C AS ARGS),
//THAT FUNCTION CREATES A BOOLEAN TO CHECK IF THE DELIMITER IS REPEATED, IF
//IT ISNT, IT ADDS ONE TO WORDS. THEN ARR IS CALLOCED USING WORDS AS ARG,
//AND THE FUNCTION RETURNS THE RETURN OF THE CALL TO FT_ARR_ALLOC (TAKES ARR,
//S AND C AS ARGS), FIRST, ALL DELIMITERS AT THE START OF S ARE SKIPPED, 
//THEN THE SIZE OF THE WORD BEFORE ANOTHER DELIMITER IS FOUND OR THE END OF
//S IS REACHED, THEN ARR IS ALLOCATED WITH THE RETURN OF SUBSTR USING THAT
//SIZE AS ARG, THIS IS DONE UNTIL THE ENTIRE ARRAY IS ALLOCATED.
//IF !S, OR MALLOC ALLOCATIONS FAIL (OF THE ENTIRE ARRAY, AND EACH SUBSTRING),
//THE FUNCTION RETURNS NULL.
