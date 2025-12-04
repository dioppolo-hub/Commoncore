/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioppolo <dioppolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 12:22:46 by dioppolo          #+#    #+#             */
/*   Updated: 2025/12/04 13:02:07 by dioppolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*freeall(char **mat, char *cpy)
{
	int	i;

	i = 0;
	while (mat[i])
	{
		free(mat[i]);
		i++;
	}
	free(mat);
	if (cpy)
		free(cpy);
	return (NULL);
}

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
	return (-1);
}

static int	countstr(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (s[0] != c)
		count++;
	i++;
	while (s[i])
	{
		if (s[i] != c && s[i - 1] == c)
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		numbstr;
	char	**mat;
	char	*cpy;

	i = 0;
	numbstr = countstr(s, c);
	cpy = ft_strdup(s);
	mat = (char **)ft_calloc(numbstr + 1, sizeof(char *));
	if (!mat)
		return (NULL);
	while (cpy)
	{
		cpy = ft_strtrim(cpy, &c);
		if (find_next_char(cpy, c) != -1)
			mat[i] = ft_substr(cpy, 0, find_next_char(cpy, c));
		if (find_next_char(cpy, c) == -1)
			mat[i] = ft_substr(cpy, 0, ft_strlen(cpy));
		if (!mat[i])
			return ((char **)freeall(mat, cpy));
		cpy = ft_strchr(cpy, c);
		i++;
	}
	free(cpy);
	return (mat);
}

/* int	main()
{
	const char s[] = "    ciao a tutti quanti";
	const char c = ' ';
	char **mat = ft_split(s, c);

	int i = 0;
	while (mat[i])
	{
		printf("%s\n", mat[i]);
		i++;
	}
	freeall(mat, NULL);
} */
