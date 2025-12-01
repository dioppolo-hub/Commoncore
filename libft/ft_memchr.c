/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioppolo <dioppolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 09:47:49 by dioppolo          #+#    #+#             */
/*   Updated: 2025/12/01 11:17:26 by dioppolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (str[i] && i < n)
	{
		if (str[i] == c)
			return ((unsigned char *)&s[i]);
		i++;
	}
	return (NULL);
}

/* int main()
{
	const char	str[] = "hsdfutrsa";
	int	c = 'f';
	size_t	n = 9;
	printf("mio:%s\n", (unsigned char *)ft_memchr(str, c, n));
	printf("reale:%s\n", (unsigned char *)memchr(str, c, n));
} */