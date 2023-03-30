/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmasetti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 09:53:39 by lmasetti          #+#    #+#             */
/*   Updated: 2022/11/04 09:53:48 by lmasetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

void	ft_putnbr(int n, size_t *r);
void	ft_putuns_base(size_t nb, size_t baselen, const char *base, size_t *r);
int		ft_percentuale(va_list args);
int		ft_char(va_list args);
int		ft_str(va_list args);
int		ft_numero(va_list args);
int		ft_unsigned(va_list args);
int		ft_esadecimalelow(va_list args);
int		ft_esadecimaleupp(va_list args);
int		ft_puntatoreesadecimale(va_list args);
int		ft_printf(const char *input, ...);

#endif
