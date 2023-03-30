/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funzioni1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmasetti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 09:55:08 by lmasetti          #+#    #+#             */
/*   Updated: 2022/11/04 09:55:21 by lmasetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_percentuale(va_list args)
{
	(void)args;
	return ((int)write (1, "%", 1));
}

int	ft_char(va_list args)
{
	char	c;

	c = (char) va_arg (args, int);
	return ((int)write (1, &c, 1));
}

int	ft_str(va_list args)
{
	char	*str;
	size_t	r;

	r = 0;
	str = va_arg (args, char *);
	if (!str)
		r = write (1, "(null)", 6);
	else
		while (str[r])
			r += write (1, &str[r], 1);
	return ((int)r);
}

int	ft_numero(va_list args)
{
	int		numero;
	size_t	r;

	r = 0;
	numero = va_arg (args, int);
	ft_putnbr (numero, &r);
	return ((int)r);
}
