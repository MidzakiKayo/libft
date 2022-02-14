/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchytter <bchytter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 16:35:03 by bchytter          #+#    #+#             */
/*   Updated: 2021/10/17 16:35:05 by bchytter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *s, int sym)
{
	char	*str;

	str = s;
	while (*s)
	{
		s++;
	}
	while (s >= str)
		if (*s-- == (char)sym)
			return ((char *)s + 1);
	return (NULL);
}
