/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchytter <bchytter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 16:39:15 by bchytter          #+#    #+#             */
/*   Updated: 2021/10/23 14:48:33 by bchytter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *des, const void *src, size_t n)
{
	unsigned char	*res_c;
	unsigned char	*src_c;

	res_c = (unsigned char *)des;
	src_c = (unsigned char *)src;
	if (res_c == src_c)
		return (des);
	while (n--)
	{
		*res_c++ = *src_c++;
	}
	return (des);
}
