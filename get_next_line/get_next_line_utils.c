/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchytter <bchytter@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 00:13:43 by bchytter          #+#    #+#             */
/*   Updated: 2022/02/12 08:41:07 by bchytter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

size_t	check_minimal(void)
{
	size_t	reminimal;

	if (BUFFER_SIZE < 10 && BUFFER_SIZE >= 1)
	{
		reminimal = 10;
		return (reminimal);
	}
	return (BUFFER_SIZE);
}

char	*get_read_line(char *readline, int fd, struct s_data *data)
{
	size_t	i;
	size_t	readbyte;

	readline = (char *)malloc(sizeof(char) * check_minimal() + 1);
	if (!readline)
		return (0);
	i = 0;
	while (i < check_minimal())
	{
		readline[i++] = data->symb;
		if (data->symb == '\n' || data->symb == '\0')
		{
			data->flag = 'y';
			break ;
		}
		readbyte = read(fd, &data->symb, 1);
		if (readbyte <= 0)
		{
			data->flag = 'y';
			break ;
		}
	}
	readline[i] = '\0';
	return (readline);
}

char	*ft_strjoin(char *left_str, char *buff)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!left_str)
	{
		left_str = (char *)malloc(1 * sizeof(char));
		left_str[0] = '\0';
	}
	if (!left_str || !buff)
		return (NULL);
	str = malloc(sizeof(char) * (ft_strlen(left_str) + ft_strlen(buff) + 1));
	if (str == NULL)
		return (NULL);
	i = -1;
	j = 0;
	if (left_str)
		while (left_str[++i] != '\0')
			str[i] = left_str[i];
	while (buff[j] != '\0')
		str[i++] = buff[j++];
	str[i] = '\0';
	if (left_str)
		free(left_str);
	return (str);
}
