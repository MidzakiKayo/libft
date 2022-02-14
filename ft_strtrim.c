/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchytter <bchytter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 16:37:14 by bchytter          #+#    #+#             */
/*   Updated: 2021/10/18 01:58:16 by bchytter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check(char s, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == s)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_rtarr(char const *s, size_t si, size_t ei)
{
	char	*str;
	int		i;
	
	i = 0;
	str = (char *)malloc(sizeof(*s) * (ei - si + 1));
	if (!str)
		return (NULL);
	while (si < ei)
		str[i++] = s[si++];
	str[i] = '\0';
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		i;
	char		*str;
	size_t		si;
	size_t		ei;

	i = 0;
	si = 0;
	if (!s1)
		return (NULL);
	while (s1[si] && check(s1[si], set) == 1)
		si++;
	while (s1[i] != '\0')
		i++;
	while (check(s1[i - 1], set) == 1)
		i--;
	ei = i;
	if (si > ei)
		si = ei;
	str = ft_rtarr(s1, si, ei);
	return (str);
}
