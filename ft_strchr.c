/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchytter <bchytter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 16:32:25 by bchytter          #+#    #+#             */
/*   Updated: 2021/10/21 03:30:25 by bchytter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ch;

	ch = (char *)s;
	while (*ch != (char)c)
	{
		if (!*ch)
			return (NULL);
		ch++;
	}
	return (ch);
}
