/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchytter <bchytter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 16:40:07 by bchytter          #+#    #+#             */
/*   Updated: 2021/10/23 17:41:05 by bchytter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

int		ft_atoi(const char *s);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t size, size_t c);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
char	*ft_itoa(int n);
char	*ft_strtrim(char const *s1, char const *set);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const char *s1, const char *s2, size_t b);
void	*ft_memcpy(void *des, const void *src, size_t n);
void	*ft_memmove(void *des, const void *src, size_t len);
char	*ft_memset(void *s, int c, size_t len);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
char	**ft_split(char const *s, char c);
char	*ft_strchr(const char *s, int sym);
char	*ft_strdup(const char *s);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char *des, const char *str, size_t size);
size_t	ft_strlcpy(char *des, const char *str, size_t size);
size_t	ft_strlen(const char *s);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_strncmp(const char *s1, const char *s2, size_t b);
char	*ft_strnstr(const char *s1, const char *s2, size_t len);
char	*ft_strrchr(char *s, int sym);
size_t	check_set(char c, const char *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_tolower(int c);
int		ft_toupper(int c);

//include other
char	*get_next_line(int fd);
int		ft_printf(const char *format, ...);


#endif
