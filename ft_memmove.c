/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchytter <bchytter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 16:39:26 by bchytter          #+#    #+#             */
/*   Updated: 2021/10/23 14:34:35 by bchytter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *des, const void *src, size_t len)
{
	unsigned char	*des_c;
	unsigned char	*src_c;

	des_c = (unsigned char *)des;
	src_c = (unsigned char *)src;
	if ((!des && des != 0) || (!src && src != 0) || !len)
		return (des);
	if (src_c < des_c)
	{
		while (len--)
		{
			des_c[len] = src_c[len];
		}
	}
	else
		ft_memcpy(des, src, len);
	return (des);
}
