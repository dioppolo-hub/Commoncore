/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioppolo <dioppolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 10:18:01 by dioppolo          #+#    #+#             */
/*   Updated: 2025/12/04 13:00:01 by dioppolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		lens1;
	size_t		lens2;
	size_t		tot;
	int			i;
	char		*newstr;

	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	tot = lens1 + lens2;
	i = 0;
	newstr = malloc(tot * sizeof(char));
	while (s1[i])
	{
		newstr[i] = s1[i];
		i++;
	}
	while (s2[i - lens1])
	{
		newstr[i] = s2[i - lens1];
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
/* int	main()
{
	const char str1[] = "Porta";
	const char str2[] = "Aerei";
	printf("%s\n", ft_strjoin(str1, str2));
} */