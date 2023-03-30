/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmasetti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 09:54:21 by lmasetti          #+#    #+#             */
/*   Updated: 2022/11/04 09:54:33 by lmasetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_init(int (*opzioni[8])(va_list))
{
	opzioni[0] = ft_percentuale;
	opzioni[1] = ft_char;
	opzioni[2] = ft_str;
	opzioni[3] = ft_numero;
	opzioni[4] = ft_unsigned;
	opzioni[5] = ft_esadecimalelow;
	opzioni[6] = ft_esadecimaleupp;
	opzioni[7] = ft_puntatoreesadecimale;
}

int	ft_conversione(const char *input)
{
	int	id;

	if (*input == '%')
		id = 0;
	else if (*input == 'c')
		id = 1;
	else if (*input == 's')
		id = 2;
	else if (*input == 'i' || *input == 'd')
		id = 3;
	else if (*input == 'u')
		id = 4;
	else if (*input == 'x')
		id = 5;
	else if (*input == 'X')
		id = 6;
	else if (*input == 'p')
		id = 7;
	return (id);
}

int	ft_analisi(const char *input, va_list args, int (*opzioni[8])(va_list))
{
	int	r;
	int	id;

	r = 0;
	while (*input)
	{
		if (*input != '%')
			r += (int) write (1, input, 1);
		else if (*(input + 1))
		{
			input++;
			id = ft_conversione(input);
			r += opzioni[id](args);
		}
		input++;
	}
	return (r);
}

int	ft_printf(const char *input, ...)
{
	int		(*opzioni[8])(va_list);
	va_list	args;
	int		r;

	ft_init (opzioni);
	va_start (args, input);
	r = ft_analisi (input, args, opzioni);
	va_end (args);
	return (r);
}
