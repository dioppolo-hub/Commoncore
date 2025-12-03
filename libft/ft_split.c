/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioppolo <dioppolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 12:22:46 by dioppolo          #+#    #+#             */
/*   Updated: 2025/12/03 13:35:55 by dioppolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find_next_char(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (i);
		i++;
	}
	return (0);
}
static int	countstr(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			count++;
		i++;
	}
	return(count);
}
char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		numbstr;
	char	**mat;
	char	*cpy;

	i = 0;
	j = 0;
	numbstr = countstr(s, c);
	cpy = ft_strdup(s);
	mat = (char **)ft_calloc(numbstr, sizeof(char *));
	if (!mat)
		return (NULL);
	while (find_next_char(cpy, c))
	{
		while (*cpy == c)
			cpy++;
		mat[i] = ft_substr(cpy, 0, find_next_char(cpy, c));
		cpy = ft_strchr(cpy,c);
		i++;
	}
	return (mat);
}

int	main()
{
	const char s[] = "ciao a tutti quanti";
	const char c = ' ';
	char **mat = ft_split(s, c);

	int i = 0;
	while (mat[i])
	{
		printf("%s\n", mat[i]);
		i++;
	}

}

