/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioppolo <dioppolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 09:39:54 by dioppolo          #+#    #+#             */
/*   Updated: 2025/11/26 09:44:28 by dioppolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (s[i - 1])
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

/* int	main()
{
	const char	str[] = "hsasdfdsaasdf";
	int	c = 'a';
	printf("mio:%s\n", ft_strrchr(str, c));
	printf("reale:%s\n", strrchr(str, c));
} */