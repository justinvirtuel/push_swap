/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgirinez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 12:11:32 by jgirinez          #+#    #+#             */
/*   Updated: 2025/01/07 12:57:29 by jgirinez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int	res;
	int	sign;
	int	i;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] == 32 || ((str[i]) >= 9 && (str[i]) <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);
}
/*
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    printf("%d\n", ft_atoi("123456"));
    printf("%d\n", ft_atoi("        1234abc56"));
    printf("%d\n", ft_atoi("-----123456"));
    printf("%d\n", ft_atoi("-+123456"));
    printf("%d\n", atoi("-+123456"));
}
*/
