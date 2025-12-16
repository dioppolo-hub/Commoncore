/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioppolo <dioppolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 16:38:58 by dioppolo          #+#    #+#             */
/*   Updated: 2025/12/16 17:59:20 by dioppolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dest, const void	*src, size_t	n)
{
	size_t	i;
	char	*str1;
	char	*str2;

	if (!dest || !src || n < 0)
		return (NULL);
	i = 0;
	str1 = (char *)dest;
	str2 = (char *)src;
	while (i < n)
	{
		str1[i] = str2[i];
		i++;
	}
	return (dest);
}

/*  int main()
{
    char dest[] = "Hello World";
    char src[] = "Ciao";
    int n = 4;
    printf("%s\n", (char *)ft_memcpy(NULL, src, n));
    printf("%s\n", (char *)memcpy(NULL, src, n));
}  */