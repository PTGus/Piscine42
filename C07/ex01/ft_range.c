/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 14:37:33 by gumendes          #+#    #+#             */
/*   Updated: 2024/08/15 16:10:42 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	len;
	int	*dest;

	len = max - min;
	if (min >= max)
		return (NULL);
	dest = (int *) malloc(sizeof(int) * len);
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		dest[i] = min;
		i++;
		min++;
	}
	return (dest);
}
/*
int	main(void)
{
	int	min = 5;
	int	max = 10;
	int	*range;
	int	i;

	range = ft_range(min, max);
	if (range == NULL)
	{
		printf("Memory allocation unsucceful\n");
		return (1);
	}
	i = 0;
	while (i < (max - min))
	{
		printf("%d ", range[i]);
		i++;
	}
	printf("\n");
	free(range);
	return(0);
}*/
