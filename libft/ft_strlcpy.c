/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgirinez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 13:29:27 by jgirinez          #+#    #+#             */
/*   Updated: 2025/01/07 13:49:28 by jgirinez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}
/*
#include <stdio.h>
int main()
{
    char src[] = "Hello, world!";
    char dest[20];
    size_t size = 10;
    size_t result = ft_strlcpy(dest, src, size);
    printf("copied word : %s\n", dest);
    printf("Length of source source : %zu\n", result);

    return 0;
}
*/
