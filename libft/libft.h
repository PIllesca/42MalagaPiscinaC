/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:12:49 by pillesca          #+#    #+#             */
/*   Updated: 2023/09/13 13:42:18 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H

// Incluido para poder usar size_t
# include <stdlib.h>

// Funciones de información sobre caracteres
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
// Funciones de manipulación de caracteres
int				ft_toupper(int c);
int				ft_tolower(int c);
// Funciones de información sobre cadenas de caracteres
size_t			ft_strlen(char *str);
int				ft_strncmp(char *s1, char *s2, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
char			*ft_strnstr(char *haystack, char *needle, size_t len);
int				ft_atoi(char *str);
// Funciones de manipulación de cadenas de caracteres
void			*ft_memset(void *b, int c, size_t len);
void			ft_bzero(void *s, size_t n);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
size_t			ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t			ft_strlcat(char *dst, const char *src, size_t dstsize);
char			*ft_strchr(char *s, int c);
char			*ft_strrchr(char *s, int c);
void			*ft_memchr(const void *s, int c, size_t n);

#endif