/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_help.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <raamorim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 11:46:08 by raamorim          #+#    #+#             */
/*   Updated: 2024/05/07 15:32:08 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c, int *counter)
{
	write(1, &c, 1);
	(*counter)++;
	return (*counter);
}

/* int main()
{
	int counter;

	counter = ft_putchar('%');
	printf("\n");
	printf("%d", counter);
} */