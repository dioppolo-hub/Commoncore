/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioppolo <dioppolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 12:15:49 by dioppolo          #+#    #+#             */
/*   Updated: 2025/11/26 09:38:35 by dioppolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}

/* int	main()
{
	const char	str[] = "1234sdf asd";
	int	c = 'a';
	printf("mio:%s\n", ft_strchr(str, c));
	printf("reale:%s\n", strchr(str, c));
} */