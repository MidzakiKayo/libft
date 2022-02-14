/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchytter <bchytter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 15:38:51 by bchytter          #+#    #+#             */
/*   Updated: 2021/11/26 15:38:51 by bchytter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char			*readline;
	char			*result;
	size_t			readbyte;
	struct s_data	data;
	struct s_data	*p_data;

	p_data = &data;
	data.symb = '\0';
	data.flag = 'n';
	result = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	readbyte = read(fd, &data.symb, 1);
	if (readbyte <= 0 || !data.symb)
		return (result);
	while (data.flag != 'y')
	{
		readline = get_read_line(readline, fd, p_data);
		result = ft_strjoin(result, readline);
		free (readline);
		if (readbyte == 0)
			return (result);
	}
	return (result);
}
