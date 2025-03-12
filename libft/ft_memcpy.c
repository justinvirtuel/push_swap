/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgirinez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 12:49:20 by jgirinez          #+#    #+#             */
/*   Updated: 2025/01/07 13:08:48 by jgirinez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (0);
	i = 0;
	while (i < n)
	{
		((unsigned char *) dest)[i] = ((unsigned char *) src)[i];
		i++;
	}
	return (dest);
}
/*#include <string.h>
#include <stdio.h>

int main() 
{
    char src[] = "Hello, world!";
    char dest[50];

    ft_memcpy(dest, src, sizeof(src));

    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);

    return 0;
}*/
