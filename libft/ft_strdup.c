/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioppolo <dioppolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 10:20:32 by dioppolo          #+#    #+#             */
/*   Updated: 2025/11/28 11:31:22 by dioppolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		len;
	size_t 	nmemb;
	char 	*dup;

	i = 0;
	len = 0;
	nmemb = ft_strlen(s);
	dup = (char *)malloc(nmemb * sizeof(char));
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	return ((char *)dup);
}

/* int	main()
{
	const char str[] = "Baldovino IV";

	printf("vera:%s\n", str);
	printf("copia:%s\n", ft_strdup(str));
} */