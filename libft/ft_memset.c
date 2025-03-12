/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgirinez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 12:56:09 by jgirinez          #+#    #+#             */
/*   Updated: 2024/12/30 13:24:13 by jgirinez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memset(void *dest, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = dest;
	while (n > 0)
	{
		*ptr = (unsigned char)c;
		ptr++;
		n--;
	}
	return (dest);
}
/*
#include <stdio.h>

int main() 
{
    char str[10] = "Hello";
    // Set the first 5 bytes of 'str' to the value 'X'
    ft_memset(str, 'X', 3);

    // Print the modified string
    printf("Modified string: %s\n", str);  
    // Output will be: "XXXXXo" (first 5 bytes are 'X')

    return (0);
    
    //the function helps to fill a block of memory with a specific value,
    in the above example it does so by replacing HEL by xxx
}
*/
