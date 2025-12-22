/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioppolo <dioppolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 09:23:01 by dioppolo          #+#    #+#             */
/*   Updated: 2025/12/22 10:33:56 by dioppolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdio.h>

int	ft_printf(const char *fmt, ...)/* '...' is C syntax for a variadic function */
{
	va_list			ap;
	int				d = 0;
	int				i = 0;
	int				x = 0;
	int				X = 0;
	unsigned int	u = 0;
	char			c = 'a';
	char			*s = "abcd";
	void			*p = 0;

	va_start(ap, fmt);
	while (*fmt)
	{
		if(s)/* string */
		{
			s = va_arg(ap, char *);
			printf("string %s\n", s);
			break;
		}
		if(d)/* int */
		{
			d = va_arg(ap, int);
			printf("int %d\n", d);
			break;
		}
		if(i)/*signed int */
		{
			i = va_arg(ap, int);
			printf("int %i\n", i);
			break;
		}
		if(u)/*unsigned int */
		{
			u = va_arg(ap, int);
			printf("int %u\n", u);
			break;
		}
		if(x)/*lowercase hexadecimal*/
		{
			x = va_arg(ap, int);
			printf("int %x\n", x);
			break;
		}
		if(X)/*uppercase hexadecimal*/
		{
			X = va_arg(ap, int);
			printf("int %X\n", X);
			break;
		}
		if(p)/* pointer */
		{
			p = va_arg(ap, void *);
			printf("char %p\n", p);
		break;
		}
		if(c)/* char */ /* need a cast here since va_arg only takes fully promoted types */
		{
			c = (char) va_arg(ap, int);
			printf("char %c\n", c);
		break;
		}
		//*fmt++;
	}
	va_end(ap);
	return (0);
}

int main()
{
	const char *fmt = "abcd";
	int	arr[9] = {9, 's', 'd', 'i', 'u', 'x', 'X', 'p', 'c'};

	ft_printf(fmt, arr);
}
