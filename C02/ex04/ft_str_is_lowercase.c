/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 17:32:25 by gumendes          #+#    #+#             */
/*   Updated: 2024/08/05 17:37:53 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 97 && str[i] <= 122))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int     main(void)
{
        printf("%i", ft_str_is_lowercase("aBc"));
        printf("%i", ft_str_is_lowercase(" "));
        printf("%i", ft_str_is_lowercase("abcd"));
        printf("%i", ft_str_is_lowercase("01234"));
	printf("%i", ft_str_is_lowercase("aVs2"));
}
*/
