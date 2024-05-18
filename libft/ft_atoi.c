/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrlinei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 04:57:06 by adrlinei          #+#    #+#             */
/*   Updated: 2023/10/15 15:08:37 by adrlinei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res * sign);
}
//TAKES A STRING (TYPE CONST CHAR *) AND RETURNS THAT AS AN INTEGER VALUE,
//THE FUNCTION FIRST CREATES THREE INT VARIABLES, AN ITERATOR, ONE TO CHECK 
//THE SIGN, AND ANOTHER ONE CALLED RES TO STORE THE RETURNED VALUE. AFTER 
//THAT, ALL SPACES AND DIFFERENT TABS ARE SKIPPED. THEN SIGNS ARE CHECKED, IF
//THERES ONE, THE ITERATOR ADVANCES, IF THE SIGN WAS A '-', THE SIGN VARIABLES
//VALUE IS CHANGED TO -1. NEXT, A LOOP IS ENTERED THATS TRUE WHILE THE ACTUAL
//STR VAL IS A NUMBER, AND THERE, EVERY NUMBER IS TURNED INTO AN INTEGER THATS
//THEN ADDED TO THE RES VARIABLE. FINALLY, THE RESULT OF MULTIPLYING RES BY
//SIGN (TO CHECK IF THE NUMBER WAS NEGATIVE) IS RETURNED.
//IF ANY VALUE THAT ISNT A SIGN OR SPACES/TABS IS FOUND BEFORE A NUMBER, THE
//FUNCTION RETURNS 0. IF A SIGN IS FOUND BEFORE SPACES/TABS, THE FUNCTION
//RETURNS 0. IF THERES MORE THAN ONE SIGN AFTER SPACES/TABS, THE FUNCTION
//RETURNS 0. VALUES OVER INT_MIN/INT_MAX DONT RETURN THE VALUE CORRECTLY.
