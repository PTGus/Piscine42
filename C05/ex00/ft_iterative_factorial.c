/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 08:35:03 by gumendes          #+#    #+#             */
/*   Updated: 2024/08/12 09:52:27 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	j;

	i = nb;
	j = 1;
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	while (i > 0)
	{
		j *= i;
		i--;
	}
	return (j);
}
/*
int	main(void)
{
	printf("%i\n", ft_iterative_factorial(5));
}
*/
