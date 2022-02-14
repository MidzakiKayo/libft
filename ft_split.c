/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchytter <bchytter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 00:21:40 by bchytter          #+#    #+#             */
/*   Updated: 2021/10/22 17:20:31 by bchytter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_word(char const *s, char c)
{
	size_t	i;
	size_t	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if ((s[i] != c && s[i + 1] == c && s[i + 1])
			|| (s[i] != c && !s[i + 1]))
			words++;
		i++;
	}
	return (words);
}

size_t	len_word(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != c && s[i])
	{
		i++;
	}
	return (i);
}

static char	**ft_free(char **s)
{
	int	i;

	i = 0;
	if (s)
	{
		while (s[i])
			free(s[i++]);
		free(s[i]);
		free(s);
	}
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	begin;
	char	**arr;

	if (!s)
		return (NULL);
	arr = malloc(sizeof(char *) * (count_word(s, c) + 1));
	if (!arr)
		return (NULL);
	i = 0;
	begin = 0;
	while (s[i++] == c)
		begin++;
	i = -1;
	while (++i < count_word(s, c))
	{
		arr[i] = ft_substr(s, begin, len_word(&s[begin], c));
		if (!arr)
			ft_free(arr);
		begin += len_word(&s[begin], c);
		while (s[begin] == c)
			begin++;
	}
	arr[i] = NULL;
	return (arr);
}
