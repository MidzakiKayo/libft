/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_m.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchytter <bchytter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 00:38:51 by bchytter          #+#    #+#             */
/*   Updated: 2021/12/10 00:38:51 by bchytter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_flag_str(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr_m(char *s, struct t_data *data)
{
	int	i;
	int len;

	i = 0;
	len = ft_strlen(s);
	data->offset -= data->priscine;
	if (data->flag_p)
		len = print_flag_str('+');
	if (data->flag_w)
		len = print_flag_str(' ');
	if (data->offset < 0)
		data->offset = 0;
	while(data->offset--)
		write(1, " ", 1);
	if (!s)
		return (write(1, "(null)", 6));
	if (data->dot)
		len = data->priscine;
	while (i < len)
		write(1, &s[i++], 1);
	while (data->last--)
	{
		write(1, " ", 2);
		i++;
	}
	return (i);
}
