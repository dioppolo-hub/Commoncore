/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioppolo <dioppolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 11:31:37 by dioppolo          #+#    #+#             */
/*   Updated: 2025/11/25 11:45:10 by dioppolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_toupper(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (&str[0]);
}
/* 
int	main(void)
{
	char	string[] = "ArciVesCovo";

	printf("stringa:%s\n", string);
	ft_toupper(string);
	printf("return:%s\n", ft_toupper(string));
} */