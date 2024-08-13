/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 11:15:08 by gumendes          #+#    #+#             */
/*   Updated: 2024/08/13 15:52:25 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_find_next_prime(int nb)
{
	int	i;
	int	j;

	if (nb <= 2)
		return (2);
	j = nb + 1;
	while (1)
	{
		i = 2;
		while (i * i <= j)
		{
			if (j % i == 0)
			{
				j++;
				break ;
			}
			i++;
		}
		if (i * i > j)
			return (j);
	}
}
/*
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int nb = atoi(argv[1]);
		int result = ft_find_next_prime(nb);
		printf("What is the closest prime to %d? It's %d", 
				nb, result);
	}
}*/
