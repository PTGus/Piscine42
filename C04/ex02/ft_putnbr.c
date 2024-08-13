/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 10:05:56 by gumendes          #+#    #+#             */
/*   Updated: 2024/08/11 10:06:10 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	i;

	i = nb;
	if (i < 0)
	{
		ft_putchar('-');
		i *= -1;
	}
	if (i >= 0 && i <= 9)
		ft_putchar(i + '0');
	if (i > 9)
	{
		ft_putnbr(i / 10);
		ft_putnbr(i % 10);
	}
}
/*
int	main(void)
{
	//ft_putnbr(42);
	ft_putnbr(-2147483648);
	//ft_putnbr(33213213);
	//ft_putnbr(0);
}
*/
