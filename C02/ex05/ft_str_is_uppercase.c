/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 17:39:37 by gumendes          #+#    #+#             */
/*   Updated: 2024/08/05 17:44:17 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 65 && str[i] <= 90))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int     main(void)
{
        printf("%i", ft_str_is_uppercase("ABC"));
        printf("%i", ft_str_is_uppercase(" "));
        printf("%i", ft_str_is_uppercase("aB3d"));
        printf("%i", ft_str_is_uppercase("01234"));
}
*/
