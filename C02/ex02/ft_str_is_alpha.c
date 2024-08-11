/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 11:28:17 by gumendes          #+#    #+#             */
/*   Updated: 2024/08/08 11:41:24 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 97 && str[i] <= 122)
				|| (str[i] >= 65 && str[i] <= 90)))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%i\n", ft_str_is_alpha("aBc"));
	printf("%i\n", ft_str_is_alpha(" "));
	printf("%i\n", ft_str_is_alpha(""));
	printf("%i\n", ft_str_is_alpha("123a"));
}
*/
