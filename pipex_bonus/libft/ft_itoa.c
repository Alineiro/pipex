/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrlinei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 08:02:45 by adrlinei          #+#    #+#             */
/*   Updated: 2023/10/15 15:09:46 by adrlinei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nblen(int n)
{
	int	len;
	int	sign;

	len = 0;
	sign = 1;
	if (n < 0)
	{
		n = n * -1;
		sign = -1;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	if (sign == -1)
		len = len + 1;
	return (len);
}

static char	*ft_check(int n)
{
	if (n == 0)
		return (ft_strdup("0"));
	return (ft_strdup("-2147483648"));
}

char	*ft_itoa(int n)
{
	char	*dst;
	int		sign;
	int		len;

	sign = 1;
	if ((n == 0) || (n == -2147483648))
		return (ft_check(n));
	len = ft_nblen(n) + 1;
	if (n < 0)
	{
		sign = -1;
		n = n * -1;
	}
	dst = (char *)malloc(len * sizeof(char));
	if (!dst)
		return (NULL);
	dst[--len] = '\0';
	while (--len >= 0)
	{
		dst[len] = n % 10 + '0';
		n = n / 10;
	}
	if (sign == -1)
		dst[0] = '-';
	return (dst);
}
//TAKES N (TYPE INT) AS ARG, THEN RETURNS THAT INT AS A STRING (TYPE CHAR *).
//FIRST TWO INITIAL CHECKS ARE DONE, IF N IS 0 OR INT_MIN, AND THEY ARE
//HARDCODED. IF ITS ANYTHING ELSE, WE TAKE THE LEN OF N USING FT_NBLEN, THIS
//FUNCTION GETS THE LEN BY DIVIDING N BY 10 UNTIL ITS 0, IF ITS NEGATIVE, LEN
//IS INCREASED 1. THEN DST IS ALLOCATED USING LEN AS ARG, AND COPYING BEGINS
//FROM THE END. FIRST THE '\0' TERMINATOR IS ADDED, AND THEN EACH NUMBER IS
//ADDED ONE BY ONE UNTIL LEN REACHES 0. IF N WAS NEGATIVE, THE FIRST POSITION
//OF THE STRING IS ASSIGNED '-'. AND THE RESULTING STRING IS RETURNED.
//IF ALLOCATION FAILS, NULL IS RETURNED.
