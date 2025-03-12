/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgirinez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 15:02:31 by jgirinez          #+#    #+#             */
/*   Updated: 2025/01/07 13:25:00 by jgirinez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	slen;
	size_t	finish;

	if (!s)
		return (0);
	slen = ft_strlen(s);
	finish = 0;
	if (start < slen)
		finish = slen - start;
	if (finish > len)
		finish = len;
	new = (char *)malloc(sizeof(char) * (finish + 1));
	if (!new)
		return (0);
	ft_strlcpy(new, s + start, finish + 1);
	return (new);
}
/*
#include <stdio.h>
int main()
{
    char *str = "Hello, World!";
    unsigned int start = 7;
    size_t len = 5;

    char *substr = ft_substr(str, start, len);
    if (substr)
    {
        printf("extracted string : '%s'\n", substr);
        free(substr);
    }
    else
    {
        printf("Memory allocation failed\n");
    }

    return 0;
}*/
