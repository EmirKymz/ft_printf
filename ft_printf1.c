/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaymaz <ekaymaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 01:59:26 by ekaymaz           #+#    #+#             */
/*   Updated: 2022/03/30 19:03:43 by ekaymaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_v2(char g)
{
	write(1, &g, 1);
	return (1);
}

int	hex_print(unsigned int n, char c)
{
	int				i;
	int				i1;
	int				len;
	char			*a;
	unsigned int	n1;

	if (c == 'X')
		a = ft_strdup("0123456789ABCDEF");
	else
		a = ft_strdup("0123456789abcdef");
	i = 1;
	n1 = n;
	while (n1 >= 16 && i++)
		n1 = n1 / 16;
	len = i;
	while (--i >= 0)
	{
		n1 = n;
		i1 = i;
		while (--i1 >= 0)
			n1 = n1 / 16;
		ft_putchar_v2(a[n1 % 16]);
	}
	free(a);
	return (len);
}

int	ptr_printer(unsigned long n)
{
	char	*a;

	a = ft_strdup("0123456789abcdef");
	if (n >= 16)
	{
		ptr_printer(n / 16);
		ptr_printer(n % 16);
	}
	else
		ft_putchar_v2(a[n]);
	free(a);
	return (0);
}

int	ptr_print(unsigned long n)
{
	int	i;

	i = 1;
	ft_putchar_v2('0');
	ft_putchar_v2('x');
	ptr_printer(n);
	while (n >= 16)
	{
		n /= 16;
		i++;
	}
	return (i + 2);
}
