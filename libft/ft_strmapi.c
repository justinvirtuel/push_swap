/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgirinez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 15:33:16 by jgirinez          #+#    #+#             */
/*   Updated: 2025/01/06 16:24:30 by jgirinez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
/*
int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	to_upper(unsigned int index, char c)
{
	(void)index;
	if (c >= 'a' && c <= 'z')
		return (c - 'a' + 'A');
	return (c);
}
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	length;
	char			*res;

	if (!s)
		return (NULL);
	length = ft_strlen(s);
	res = (char *)malloc(sizeof(char) * (length + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (i < length)
	{
		res[i] = (*f)(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
/*
#include <stdio.h>
int main()
{
    char str[] = "hello, world!";
    char *new_str = ft_strmapi(str, to_upper);

    if (new_str)
    {
        printf("Original string: %s\n", str);
        printf("Transformed string: %s\n", new_str);
        free(new_str); // Libère la mémoire allouée
    }
    else
    {
        printf("Memory allocation failed!\n");
    }

    return 0;
}*/
