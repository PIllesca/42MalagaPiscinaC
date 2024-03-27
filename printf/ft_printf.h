/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 12:19:29 by pillesca          #+#    #+#             */
/*   Updated: 2024/03/27 13:21:19 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

void	ft_invstr(char *str);
void	to_upper(unsigned int index, char *c);
void	ft_inthex(int num, char *str);
void	ft_puthex(int num);
void	ft_putuhex(int num);
void	ft_putmhex(void *p);
int		ft_printf(char const *str, ...);

#endif
