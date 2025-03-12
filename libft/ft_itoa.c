/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgirinez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 14:34:00 by jgirinez          #+#    #+#             */
/*   Updated: 2025/01/06 15:21:14 by jgirinez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	*ft_char(char *s, unsigned int number, long int len)
{
	while (number > 0)
	{
		s[len--] = 48 + (number % 10);
		number = number / 10;
	}
	return (s);
}

static long int	ft_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*s;
	long int		len;
	unsigned int	number;
	int				sign;

	sign = 1;
	len = ft_len(n);
	s = (char *)malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	s[len--] = '\0';
	if (n == 0)
		s[0] = '0';
	if (n < 0)
	{
		sign *= -1;
		number = n * -1;
		s[0] = '-';
	}
	else
		number = n;
	s = ft_char(s, number, len);
	return (s);
}
/*
#include <stdio.h>
int main()
{
    int n1 = 59389;
    int n2 = -5678;
    int n3 = 0;

    char *str1 = ft_itoa(n1);
    char *str2 = ft_itoa(n2);
    char *str3 = ft_itoa(n3);
    printf("the converted number is : %s\n",  str1);
    printf("the converted number is : %s\n",  str2);
    printf("the converted number is : %s\n",  str3);
    free(str1);
    free(str2);
    free(str3);

    return 0;
}
*/
/*the function convert a given number into a string,
 static long int ft_len(int n) get the length of the number
 ft_char converts the number into a char by adding 48 (ascii)
*/
