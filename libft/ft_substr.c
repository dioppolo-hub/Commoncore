/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioppolo <dioppolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 11:32:55 by dioppolo          #+#    #+#             */
/*   Updated: 2025/12/01 13:10:43 by dioppolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	lenstr;
	char *substr;
	char *dup;

	i = 0;
	j = 0;
	lenstr = ft_strlen(str);
	if (start > lenstr)
		return (NULL);
	if (len > lenstr)
		len = lenstr - start;
	if (len == 0)
	{
		dup = ft_strdup(str);
		dup = "";
		return (dup);
	}
	substr = malloc(len * sizeof(char));
	while (str[i])
	{
		if (i >= start)
		{
			substr[j] = str[i];
			j++;
			if (j == len)
			{
				substr[j] = '\0';
				return (substr);
			}
		}
		i++;
	}
	return (NULL);
}
/* 
int	main()
{
	const char str[] = "PortaAereiCarta";
	unsigned int start = 10;
	size_t len = 6;
	printf("%s\n", ft_substr(str, start, len));
} */