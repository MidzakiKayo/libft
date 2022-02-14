/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchytter <bchytter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 16:41:17 by bchytter          #+#    #+#             */
/*   Updated: 2021/10/23 17:12:19 by bchytter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int							sign;
	unsigned long long int		num;

	num = 0;
	sign = 1;
	while ((*str == ' ') || (*str == '\t') || (*str == '\n')
		|| (*str == '\v') || (*str == '\f') || (*str == '\r'))
		str++;
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			sign = -1;
	while (ft_isdigit(*str))
	{
		num = (num * 10) + (*str++ - '0');
		if (num > 9223372036854775807 && sign == -1)
			return (0);
		else if (num > 9223372036854775807 && sign == 1)
			return (-1);
	}
	return (num * sign);
}
