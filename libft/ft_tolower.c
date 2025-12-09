/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioppolo <dioppolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 11:45:32 by dioppolo          #+#    #+#             */
/*   Updated: 2025/12/09 12:20:01 by dioppolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if(c >= 97 && c <= 122)
		c = c - 32;
	return (c);
}

int	main(void)
{
	char	string = 'a';

	printf("stringa:%c\n", string);
	ft_toupper(string);
	printf("return:%c\n", ft_toupper(string));
}

int	main(void)
{
	char	string = 'A';

	printf("stringa:%c\n", string);
	ft_toupper(string);
	printf("return:%c\n", ft_toupper(string));
}