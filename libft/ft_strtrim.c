/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgirinez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 13:49:47 by jgirinez          #+#    #+#             */
/*   Updated: 2025/01/06 14:12:44 by jgirinez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stddef.h>

char	*ft_strtrim(char *s1, char *set)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = 0;
	if (!set || !s1)
		return (0);
	i = 0;
	j = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (ft_strchr(set, s1[j - 1]) && j > i)
		j--;
	str = (char *)malloc(sizeof(char) * (j - i + 1));
	if (str)
	{
		ft_strlcpy(str, &s1[i], j - i + 1);
	}
	return (str);
}
/*
#include <stdio.h>

int main()
{
    char *str = "   **Hello, World!**   ";
    char *set = " *";
    char *result = ft_strtrim(str, set);

    if (result)
    {
        printf("Trimmed string: '%s'\n", result);
        free(result);
    }
    else
    {
        printf("Error: Memory allocation failed or invalid input.\n");
    }

    return 0;
}*/

/*the function is supposed to remove unwanted characters
from the front and back of the given string, 
while (s1[i] && ft_strchr(set, s1[i])) iterates
until ft_strchr does not return 0;
*/
