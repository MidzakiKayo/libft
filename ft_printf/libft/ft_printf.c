/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchytter <bchytter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 05:47:41 by bchytter          #+#    #+#             */
/*   Updated: 2021/11/03 05:47:41 by bchytter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	datainit(struct t_data *data, char *format)
{
	data->len = 0;
	data->str = format;
	data->flag_w = 0;
	data->flag_p = 0;
	data->priscine = 0;
	data->offset = 0;
	data->dot = 0;
	data->last = 0;
}

int	skip_num(char *str, int i)
{
	int num;

	num = 0;
	while (str[i] >= '0' && str[i] <= '9')
		num = (num * 10) + (str[i++] - 48);
	return (num);
}

int get_param(char *str, struct t_data *data, int i)
{
	data->offset = 0;
	data->priscine = 0;
	if (str[i] == '+' && !data->flag_p && !data->flag_w && !data->dot)
	{
		i++;
		data->flag_p = 1;
	}
	else if (str[i] == '-' && !data->flag_p && !data->flag_w && !data->dot)
		data->last = skip_num(str, i);
	if ((str[i] >= '0' && str[i] <= '9') || str[i] == '.')
	{
		while ((str[i] >= '0' && str[i] <= '9') || str[i] == '.')
		{
			if (!data->dot && str[i] == '.')
				data->dot = 1;
			else if (!data->dot)
				data->offset = (data->offset * 10) + (str[i] - 48);
			else
				data->priscine = (data->priscine * 10) + (str[i] - 48);
			i++;
		}
	}
	return (i);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	struct t_data	data;
	struct t_data	*p_data;
	int		i;

	i = -1;
	p_data = &data;
	datainit(p_data, (char *)format);
	va_start(ap, format);
	while (data.str[++i] != '\0')
	{
		if (data.str[i] == '%')
		{
			i = get_param(data.str, p_data, ++i);
			if (parser_arg(data.str[i]) == 1)
				data.data = va_arg(ap, int);
			else if (parser_arg(data.str[i]) == 2)
				data.data = va_arg(ap, unsigned int);
			data.len += parser_command(data.str[i], ap, p_data);
		}
		else
			data.len += write(1, &data.str[i], 1);
	}
	va_end(ap);
	return (data.len);
}
