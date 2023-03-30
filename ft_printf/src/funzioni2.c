/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funzioni2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmasetti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 09:55:40 by lmasetti          #+#    #+#             */
/*   Updated: 2022/11/04 09:55:44 by lmasetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned(va_list args)
{
	unsigned int	nb;
	size_t			r;

	r = 0;
	nb = va_arg (args, unsigned int);
	ft_putuns_base (nb, 10, "0123456789", &r);
	return ((int)r);
}

int	ft_esadecimalelow(va_list args)
{
	unsigned int	nb;
	size_t			r;

	r = 0;
	nb = va_arg (args, unsigned int);
	ft_putuns_base (nb, 16, "0123456789abcdef", &r);
	return ((int)r);
}

int	ft_esadecimaleupp(va_list args)
{
	unsigned int	nb;
	size_t			r;

	r = 0;
	nb = va_arg (args, unsigned int);
	ft_putuns_base (nb, 16, "0123456789ABCDEF", &r);
	return ((int)r);
}

int	ft_puntatoreesadecimale(va_list args)
{
	unsigned long	nb;
	size_t			r;

	nb = va_arg (args, unsigned long);
	if (!nb)
		return ((int)write (1, "(nil)", 5));
	r = (int)write (1, "0x", 2);
	ft_putuns_base (nb, 16, "0123456789abcdef", &r);
	return ((int)r);
}
