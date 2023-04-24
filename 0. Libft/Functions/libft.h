/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcosta-d <mcosta-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 14:43:47 by mcosta-d          #+#    #+#             */
/*   Updated: 2023/04/23 20:44:24 by mcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H

# include<limits.h>
# include <stddef.h>
# include <stdlib.h>

/*PART 1 - Libc functions*/
/*Checker functions*/
int		ft_isalpha(int nb);
int		ft_isdigit(int nb);
int		ft_isalnum(int nb);
int		ft_isascii(int nb);
int		ft_isprint(int nb);

/*string.h librarie*/
size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
char	*ft_strnstr(const char *big, const char *lit, size_t len);
void	*ft_memset(void *ptr, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	ft_bzero(void *ptr, size_t n);

/*Conversion functions*/
int		ft_atoi(const char *str);

/*ctype.h - string and char manipulation*/
int		ft_toupper(int c);
int		ft_tolower(int c);

/*Functions that use malloc()*/
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_strdup(const char *s);

/*PART 2 - Additional functions*/
char	*ft_substr(char const *s, unsigned int start, size_t len);

#endif
