/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchytter <bchytter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 16:33:41 by bchytter          #+#    #+#             */
/*   Updated: 2021/10/17 21:32:24 by bchytter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *des, const char *str, size_t size)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	while (des[i] && i < size)
	{
		i++;
	}
	while (str[j] && (i + j + 1) < size)
	{
		des[i + j] = str[j];
		j++;
	}
	if (i < size)
		des[i + j] = '\0';
	return (i + ft_strlen(str));
}
