/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioppolo <dioppolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 11:45:32 by dioppolo          #+#    #+#             */
/*   Updated: 2025/11/25 11:48:16 by dioppolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_tolower(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (&str[0]);
}
/* 
int	main(void)
{
	char	string[] = "TOpOGiGIO";

	printf("stringa:%s\n", string);
	ft_tolower(string);
	printf("return:%s\n", ft_tolower(string));
} */