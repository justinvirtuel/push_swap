/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgirinez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 12:41:20 by jgirinez          #+#    #+#             */
/*   Updated: 2025/01/07 12:35:23 by jgirinez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
int main()
{
    char str[] = "Hello, world!";
    char *result;

    result = ft_memchr(str, 'd', sizeof(str));
    if (result != NULL)
    {
        printf("The address found is: %p\n", result);
        printf("the character found is: %c\n", *result);
    }
    else
        printf("Character not found.\n");

    return 0;
}*/
