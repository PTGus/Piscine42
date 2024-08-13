/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 16:24:20 by gumendes          #+#    #+#             */
/*   Updated: 2024/08/12 17:58:28 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (nb != i * i && i < nb)
	{
		i++;
	}
	if (nb == i * i)
		return (i);
	else
		return (0);
}
/*
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int nb = atoi(argv[1]);
		int result = ft_sqrt(nb);
		printf("sqrt of %d is %d\n", nb, result);
	}
	return (0);
}*/
