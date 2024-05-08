/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <raamorim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 11:19:21 by raamorim          #+#    #+#             */
/*   Updated: 2024/05/07 18:02:24 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

# define FLAGS "csdiupxX%"

void	ft_putptr(unsigned long int n, int *counter);
int	ft_ptr(unsigned long int ptr, int *counter);

int	ft_putchar(char c, int *counter);

int	ft_putstr(char *str, int *counter);

int	ft_putnbr(long int nb, int *counter);
int	ft_putnbr_base_x(unsigned int nb, int *counter);
int	ft_putnbr_base_X(unsigned int nb, int *counter);
int	ft_putnbr_u(unsigned int n, int *counter);

int	ft_printf(const char *str, ...);

#endif