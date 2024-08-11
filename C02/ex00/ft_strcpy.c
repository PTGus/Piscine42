/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 13:21:55 by gumendes          #+#    #+#             */
/*   Updated: 2024/08/08 08:22:40 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char	dest[] = "Dest";
	char	src[] = "Source";

	printf("dest antes: %s\n", dest);
	ft_strcpy(dest, src);
	printf("dest depois: %s\n", dest);
}
*/
