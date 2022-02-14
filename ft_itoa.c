/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchytter <bchytter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 16:14:50 by bchytter          #+#    #+#             */
/*   Updated: 2021/10/23 17:35:48 by bchytter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	len_numb(long num)
{
	int	i;

	i = 0;
	if (num == 0)
		i++;
	if (num < 0)
	{
		num *= -1;
		i++;
	}
	while (num > 0)
	{
		num = num / 10;
		i++;
	}
	return (i);
}

char	*take_res(char *s, long numb, size_t len)
{
	int	i;

	i = 0;
	if (numb == 0)
	{
		s[i] = '0';
		return (s);
	}
	if (numb < 0)
	{
		s[0] = '-';
		numb *= -1;
	}
	while (numb > 0)
	{
		s[len--] = '0' + (numb % 10);
		numb /= 10;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*str;
	long	numb;

	numb = n;
	len = len_numb(numb);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len--] = '\0';
	return (take_res(str, numb, len));
}
