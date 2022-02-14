/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchytter <bchytter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 16:39:51 by bchytter          #+#    #+#             */
/*   Updated: 2021/10/23 17:14:13 by bchytter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char			*p;
	unsigned int	len;
	unsigned int	i;

	i = 0;
	len = (count * size);
	p = malloc(len);
	if (!p)
		return (NULL);
	ft_bzero(p, count * size);
	return (p);
}
