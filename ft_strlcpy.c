/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchytter <bchytter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 16:33:50 by bchytter          #+#    #+#             */
/*   Updated: 2021/10/23 14:51:11 by bchytter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *des, const char *str, size_t size)
{
	int	i;

	i = 0;
	if ((!des && des != NULL) || (!str && str != NULL))
		return (0);
	while (str[i] && size > 1)
	{
		des[i] = str[i];
		i++;
		size--;
	}
	if (size > 0)
		des[i] = '\0';
	return (ft_strlen(str));
}
