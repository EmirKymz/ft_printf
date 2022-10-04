/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaymaz <ekaymaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 01:48:22 by ekaymaz           #+#    #+#             */
/*   Updated: 2022/03/07 01:59:04 by ekaymaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

int	ft_bas_say(unsigned int c);
int	array_print(char *str);
int	ft_putchar_v2(char g);
int	hex_print(unsigned int n, char c);
int	ptr_printer(unsigned long n);
int	ptr_print(unsigned long n);
int	ft_uitoa(unsigned int a);
int	ft_strchecker(va_list arg, int g);
int	ft_printf(const char *str, ...);

#endif
