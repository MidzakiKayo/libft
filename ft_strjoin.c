/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchytter <bchytter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 16:33:30 by bchytter          #+#    #+#             */
/*   Updated: 2021/10/18 01:24:48 by bchytter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	int		i;

	if (s1 && s2)
	{
		p = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
		if (p)
		{
			i = 0;
			while (*s1)
				p[i++] = *s1++;
			while (*s2)
				p[i++] = *s2++;
			p[i] = '\0';
			return (p);
		}
	}
	return (NULL);
}
