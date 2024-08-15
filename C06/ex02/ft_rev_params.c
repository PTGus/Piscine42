/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 08:20:55 by gumendes          #+#    #+#             */
/*   Updated: 2024/08/14 08:34:31 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	j = 1;
	while (argv[j] != (void *)0)
		j++;
	if (argc > 0)
	{
		j -= 1;
		while (j > 0)
		{
			i = 0;
			while (argv[j][i] != '\0')
			{
				write (1, &argv[j][i], 1);
				i++;
			}
			write(1, "\n", 1);
			j--;
		}
	}
	return (0);
}
