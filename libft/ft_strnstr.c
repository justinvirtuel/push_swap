/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgirinez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 13:35:24 by jgirinez          #+#    #+#             */
/*   Updated: 2024/12/30 13:37:35 by jgirinez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == '\0' || needle == haystack)
		return ((char *)&haystack[i]);
	while (haystack[i] && i < n)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j) < n)
		{
			if (needle[j + 1] == '\0')
				return ((char *)&haystack[i]);
			j++;
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int    main(void)
{
    char *test;
    
    test = ft_strnstr("this is mine", "is m", 9);

    if (!test)
        printf("Word not found.\n");
    else
        printf("%s\n", test);
    return (0);
}*/
