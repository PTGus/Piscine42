/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlessa-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 15:09:33 by mlessa-s          #+#    #+#             */
/*   Updated: 2024/08/04 16:20:11 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print(int coluna, char first, char middle, char last)
{
	int	i;

	i = 1;
	while (i <= coluna)
	{
		if (i == 1)
			ft_putchar(first);
		else if (i == coluna)
			ft_putchar(last);
		else
			ft_putchar(middle);
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;
	int	coluna;
	int	linha;

	i = 1;
	coluna = x;
	linha = y;
	if (coluna >= 1 && linha >= 1)
	{
		while (i <= linha)
		{
			if (i == 1)
				ft_print(coluna, 'o', '-', 'o');
			else if (i < linha)
				ft_print(coluna, '|', ' ', '|');
			i++;
			if (i == linha)
				ft_print(coluna, 'o', '-', 'o');
		}
	}
}
