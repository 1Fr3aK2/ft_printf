/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_help.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <raamorim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 11:19:08 by raamorim          #+#    #+#             */
/*   Updated: 2024/05/07 18:04:07 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "ft_printf.h"

int	ft_putnbr(int n, int *counter)
{	
	long int nb;
	
	nb = n;
	if (nb < 0)
	{
		nb *= -1;
		ft_putchar('-', counter);
		(*counter)++;
		ft_putnbr(nb, counter);
	}
	else if (nb <= 9)
	{
		nb += 48;
		write(1, &nb, 1);
		(*counter)++;
	}
	else
	{
		ft_putnbr(nb / 10, counter);
		ft_putnbr(nb % 10, counter);
	}
	return (*counter);
}

int	ft_putnbr_base_x(unsigned int nb, int *counter)
{
	char	*symbols;

	symbols = "0123456789abcdef";
	if (nb < 16)
	{
		ft_putchar(symbols[nb], counter);
	}
	else
	{
		ft_putnbr_base_x(nb / 16, counter);
		ft_putnbr_base_x(nb % 16, counter);
	}
	return (*counter);
}

int	ft_putnbr_base_X(unsigned int nb, int *counter)
{
	char	*symbols;

	symbols = "0123456789ABCDEF";
	if (nb < 16)
	{
		ft_putchar(symbols[nb], counter);
	}
	else
	{
		ft_putnbr_base_X(nb / 16, counter);
		ft_putnbr_base_X(nb % 16, counter);
	}
	return (*counter);
}

int	ft_putnbr_u(unsigned int nb, int *counter)
{
	if (nb <= 9)
	{
		nb += 48;
		ft_putchar(nb,counter);
	}
	else
	{
		ft_putnbr_u(nb / 10, counter);
		ft_putnbr_u(nb % 10, counter);
	}
	return (*counter);
}

// int	main()
// {
// 	int counter;

// 	counter = ft_putnbr(-1, &counter);
// 	printf("\n");
// 	printf("%d", counter);
	
// }