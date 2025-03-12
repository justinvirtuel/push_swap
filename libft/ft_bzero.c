/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgirinez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 12:21:20 by jgirinez          #+#    #+#             */
/*   Updated: 2025/01/07 12:10:22 by jgirinez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr = 0;
		ptr++;
		n--;
	}
}
/*#include <stdio.h>
#include <string.h>

int main() {
    char array[10] = "Hello";

    // Use bzero to set the first 5 bytes of the array to 0
    bzero(array, 5);

    printf("Result: %s\n", array);  // Output will be: "\0\0\0\0\0"

    return 0;
}*/
//the function is used to set a block of memory to zero (set all bytes to 0).
