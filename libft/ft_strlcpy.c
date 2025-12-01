/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioppolo <dioppolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 09:54:07 by dioppolo          #+#    #+#             */
/*   Updated: 2025/11/25 11:00:12 by dioppolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i);
}

/* int	main(void)
{
	char	src[] = "campanello";
	char	dest[] = "";
	unsigned int	size = 15;

	printf("%d\n %s\n", ft_strlcpy(dest, src, size), dest);
} */