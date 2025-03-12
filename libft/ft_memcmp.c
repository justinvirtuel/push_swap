/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgirinez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 12:46:39 by jgirinez          #+#    #+#             */
/*   Updated: 2024/12/30 12:48:51 by jgirinez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int main() {
    char s1[] = "Hello";
    char s2[] = "Hello, World!";
    int test = ft_memcmp(s1, s2, 8); 
    printf("ft_memcmp(s1, s2, 5) = %d\n", test);
    return 0;
}*/
