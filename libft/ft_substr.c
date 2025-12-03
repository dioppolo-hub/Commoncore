/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioppolo <dioppolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 11:32:55 by dioppolo          #+#    #+#             */
/*   Updated: 2025/12/03 11:55:09 by dioppolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	size_t	i;
	size_t	lenstr;
	char	*substr;

	i = 0;
	lenstr = ft_strlen(str);
	if (start > lenstr)
		return (NULL);
	if (len > lenstr)
		len = lenstr - start;
	if (len == 0)
		return (ft_strdup(""));
	substr = malloc(len * sizeof(char));
	while (str[i])
	{
		if (i >= start)
		{
			substr[i - start] = str[i];
			if (i == start + len - 1)
				return (substr);
		}
		i++;
	}
	return (NULL);
}

/* int	main()
{
	const char str[] = "PortaAereiCarta";
	unsigned int start = 10;
	size_t len = 5000;
	printf("%s\n", ft_substr(str, start, len));
	//NULL terminare la substr?
} */