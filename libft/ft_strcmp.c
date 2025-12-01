/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioppolo <dioppolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 09:45:28 by dioppolo          #+#    #+#             */
/*   Updated: 2025/11/26 09:47:00 by dioppolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

/* int	main(void)
{
	char	s1[] = ";lkjhg";
	char	s2[] = "asdfgh";

	printf("mio:%d\n", ft_strcmp(s1, s2));
	printf("reale:%d\n", strcmp(s1, s2));
} */