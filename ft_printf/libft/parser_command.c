/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_command.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchytter <bchytter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 00:42:15 by bchytter          #+#    #+#             */
/*   Updated: 2021/12/10 00:42:15 by bchytter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_p(size_t arg, struct t_data *data)
{
	write(1, "0x", 2);
	return (ft_putnbr_base(arg,
		DIGIT_16INTL, 16, 'p', data) + 2);
}

int	parser_command(char flags, va_list args, struct t_data *data)
{
	if (flags == 'c')
		return (write(1, &(data->data), 1));
	else if (flags == 'i' || flags == 'd')
		return (ft_putnbr_m(data->data, DIGIT_INT, 10, data));
	else if (flags == 'u')
		return (ft_putnbr_base(data->data, DIGIT_INT, 10, 'u', data));
	else if (flags == 'x' || (flags == 'x' && flags == '#'))
		return (ft_putnbr_base(data->data, DIGIT_16INTL, 16, 'x', data));
	else if (flags == 'X' || (flags == 'X' && flags == '#'))
		return (ft_putnbr_base(data->data, DIGIT_16INTU, 16, 'X', data));
	else if (flags == 'p')
		print_p(va_arg(args, size_t), data);
	else if (flags == 's')
		return (ft_putstr_m(va_arg(args, char *), data));
	else
		return (write(1, "%", 1));
}
