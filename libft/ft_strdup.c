/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgirinez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 13:20:29 by jgirinez          #+#    #+#             */
/*   Updated: 2025/01/06 13:22:33 by jgirinez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*str;

	i = 0;
	while (src[i])
		i++;
	str = (char *) malloc(sizeof(char) * (i + 1));
	if (!str)
		return (0);
	i = 0;
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*#include <stdio.h>

int	main(void)
{
	char *src = "Hello World";
	char *copy = ft_strdup(src);

	if (copy != NULL)
	{
		printf("%s\n", copy);
		free(copy);
	}
	else
		printf("Memory allocation failed\n");
}*/
