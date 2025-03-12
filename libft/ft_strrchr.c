/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgirinez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 13:38:08 by jgirinez          #+#    #+#             */
/*   Updated: 2024/12/30 13:39:43 by jgirinez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if ((char )c == s[i])
			return ((char *)&s[i]);
		i--;
	}
	return (0);
}
/*#include <stdio.h>
int main()
{
    const char *str = "Hello, World!";
    char ch = 'o';
    
    char *result = ft_strrchr(str, ch); 
    if (result)
        printf("Last occurence of '%c': %s\n", ch, result);
    else
        printf("Character '%c' not found.\n", ch);
    
    return 0;
}*/

//the function looks for the last occurance of the given letter,
