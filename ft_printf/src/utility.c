/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utility.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmasetti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:09:12 by lmasetti          #+#    #+#             */
/*   Updated: 2022/11/04 16:09:18 by lmasetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, size_t *r)
{
	long	ln;

	ln = n;
	if (ln < 0)
	{
		ln = -ln;
		*r += write (1, "-", 1);
	}
	if (ln >= 10)
		ft_putnbr ((int)(ln / 10), r);
	*r += write (1, &"0123456789"[ln % 10], 1);
}

void	ft_putuns_base(size_t nb, size_t baselen, const char *base, size_t *r)
{
	if (nb >= baselen)
		ft_putuns_base (nb / baselen, baselen, base, r);
	*r += write(1, &base[nb % baselen], 1);
}
