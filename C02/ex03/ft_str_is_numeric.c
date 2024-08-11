/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 17:16:38 by gumendes          #+#    #+#             */
/*   Updated: 2024/08/05 17:31:53 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 48 && str[i] <= 57))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
        printf("%i", ft_str_is_numeric("aBc"));
        printf("%i", ft_str_is_numeric(" "));
        printf("%i", ft_str_is_numeric("aB3d"));
	printf("%i", ft_str_is_numeric("01234"));
}
*/
