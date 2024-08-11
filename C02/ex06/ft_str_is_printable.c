/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 17:39:37 by gumendes          #+#    #+#             */
/*   Updated: 2024/08/06 09:17:59 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int     main(void)
{
        printf("%i", ft_str_is_printable("ABC"));
        printf("%i", ft_str_is_printable(" "));
        printf("%i", ft_str_is_printable("aB3d"));
        printf("%i", ft_str_is_printable("01234"));
}
*/
