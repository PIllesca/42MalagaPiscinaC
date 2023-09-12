/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:12:49 by pillesca          #+#    #+#             */
/*   Updated: 2023/09/12 13:22:04 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H

// Funciones de información sobre caracteres
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
// Funciones de información sobre cadenas
unsigned long	ft_strlen(char *str);
// Funciones sobre cadenas
void			*ft_memset(void *b, int c, unsigned long len);
void			ft_bzero(void *s, unsigned long n);
void			*ft_memcpy(void *dst, const void *src, unsigned long n);
void			*ft_memmove(void *dst, const void *src, unsigned long len);

#endif