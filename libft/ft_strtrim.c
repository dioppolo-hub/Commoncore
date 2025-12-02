/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioppolo <dioppolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 11:01:28 by dioppolo          #+#    #+#             */
/*   Updated: 2025/12/02 12:58:30 by dioppolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char *ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	size_t	lens1;
	size_t	lenset;
	char 	*newstr;

	i = 0;
	lens1 = ft_strlen(s1);
	lenset = ft_strlen(set);
	j = lens1;
	newstr = malloc(lens1 * sizeof(char));
	while (s1[i])
	{
		while (s1[i] == *set)
			i++;
		newstr[i - lenset] = s1[i];
		i++;
	}
	while (s1[j - 1])
	{
		while (s1[j] == *set)
			j--;
		newstr[j - lenset] = s1[j];
		j--;
	}
	return (newstr);
}

int	main()
{
	const char s1[] = " pqPorta qp";
	const char set[] = "qp ";
	printf("%s\n", ft_strtrim(s1, set));
}