/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioppolo <dioppolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 11:32:55 by dioppolo          #+#    #+#             */
/*   Updated: 2025/12/02 09:46:40 by dioppolo         ###   ########.fr       */
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
			substr[i] = str[i];
			printf("%s\n", substr);
			if (i == len)
				return (substr);
		}
		i++;
	}
	return (NULL);
}

int	main()
{
	const char str[] = "PortaAereiCarta";
	unsigned int start = 5;
	size_t len = 5;
	printf("%s\n", ft_substr(str, start, len));
}