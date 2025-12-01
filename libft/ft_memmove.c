/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioppolo <dioppolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 17:23:41 by dioppolo          #+#    #+#             */
/*   Updated: 2025/11/28 11:46:35 by dioppolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*str1;
	char	*str2;

	i = 0;
	str1 = (char *)dest;
	str2 = (char *)src;
	while (i < n)
	{
		*str1 = *str2;
		i++;
		str1++;
		str2++;
	}
	while (str1[i])
		i++;
	str1[i] = '\0';
	return (dest);
}

/* int main()
{
    char    dest[] = "123456789";
    char    src[] = "abcd";
    int n = 15;

    printf("mio:%s\n", (char *)ft_memmove(dest, src, n));
    printf("reale:%s\n", (char *)memmove(dest, src, n));
} */