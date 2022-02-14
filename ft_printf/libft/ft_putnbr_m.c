/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_m.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchytter <bchytter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 00:41:50 by bchytter          #+#    #+#             */
/*   Updated: 2021/12/10 00:41:50 by bchytter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putnbr_m(long n, char *base, int base_len, struct t_data *data)
{
	size_t	i;
	size_t	len;
	char	str[30];

	i = 0;
	len = 0;
	if (n == -2147483648)
		return (write(1, "-2147483648", 11));
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	len += 1;
	}
	if (n == 0)
		return (write(1, "0", 1));
	while (n != 0)
	{
		str[i++] = base[n % base_len];
		n /= base_len;
	}
	str[i] = '\0';
	ft_putstr_nbr(str, i, data);
	return (ft_strlen(str) + len);
}
