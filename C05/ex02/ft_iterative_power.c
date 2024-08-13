/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 11:29:54 by gumendes          #+#    #+#             */
/*   Updated: 2024/08/12 17:59:03 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	j;
	int	sum;

	sum = 1;
	i = nb;
	j = power;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	while (j > 0)
	{
		sum *= i;
		j--;
	}
	return (sum);
}
/*
int	main(void)
{
	printf("%i\n", ft_iterative_power(0, 0));
}*/
