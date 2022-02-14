/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchytter <bchytter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 00:09:12 by bchytter          #+#    #+#             */
/*   Updated: 2021/11/25 00:09:12 by bchytter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000
# endif

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

struct s_data
{
	char	symb;
	char	flag;
};

char	*get_read_line(char *readline, int fd, struct s_data *d);
char	*ft_strjoin(char *left_str, char *buff);
size_t	ft_strlen(char *s);
char	*get_next_line(int fd);

#endif
