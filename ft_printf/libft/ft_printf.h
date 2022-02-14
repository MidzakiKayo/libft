/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchytter <bchytter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 05:55:53 by bchytter          #+#    #+#             */
/*   Updated: 2021/11/03 05:55:53 by bchytter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>

# include "../../libft.h"

# define DIGIT_INT "0123456789"
# define DIGIT_16INTL "0123456789abcdef"
# define DIGIT_16INTU "0123456789ABCDEF"

struct t_data
{
	char	*str;
	int		len;
	int		flag_w;
	int		flag_p;
	size_t	data;
	int		priscine;
	int		offset;
	int		dot;
	int		last;
};

int		ft_printf(const char *format, ...);
int		parser_command(char flags, va_list args, struct t_data *data);
int		parser_arg(char c);
int		ft_putstr_m(char *s, struct t_data *data);
int		check_flags(char c);
size_t	ft_putnbr_m(long n, char *base, int base_len, struct t_data *data);
size_t	ft_putnbr_base(size_t n, char *base, int base_len, char format, struct t_data *data);
void	ft_putstr_nbr(char *str, size_t i, struct t_data *data);
#endif
