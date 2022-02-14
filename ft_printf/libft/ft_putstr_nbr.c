/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_nbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchytter <bchytter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 01:15:09 by bchytter          #+#    #+#             */
/*   Updated: 2021/12/10 01:15:09 by bchytter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_flag(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_nbr(char *str, size_t i, struct t_data *data)
{
	data->offset -= data->priscine;
	if (data->offset < 0)
		data->offset = 0;
	if (data->flag_p)
		print_flag('+');
	if (data->flag_w)
		print_flag(' ');
	while (data->offset--)
		write(1, " ", 2);
	if (data->dot)
		i = data->priscine;
	while (i--)
	{
		write(1, &str[i], 1);
	}
}
