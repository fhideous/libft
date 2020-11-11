/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhideous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 21:14:47 by fhideous          #+#    #+#             */
/*   Updated: 2020/11/10 17:26:05 by fhideous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		len_n(int n)
{
	if (n / 10 != 0)
		return (1 + len_n(n / 10));
	return (1);
}

static int		power_ten(int n)
{
	if (n > 1)
		return (10 * power_ten(n - 1));
	return (1);
}

void			ft_putnbr_fd(int n, int fd)
{
	int		len;
	int		power;
	int		is_neg;
	long	long_n;

	long_n = (long)n;
	is_neg = 0;
	if (long_n < 0)
	{
		is_neg = 1;
		long_n *= -1;
		ft_putchar_fd('-', fd);
	}
	len = len_n(long_n - is_neg);
	while (len)
	{
		power = power_ten(len);
		ft_putchar_fd((char)(long_n / power + 48), fd);
		long_n %= power;
		len--;
	}
}
