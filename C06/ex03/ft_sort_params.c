/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 08:48:23 by gumendes          #+#    #+#             */
/*   Updated: 2024/08/14 14:15:51 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str);

void	ft_write(int argc, char **argv)
{
	int		a;

	a = 1;
	while (a < argc)
	{
		write(1, argv[a], ft_strlen(argv[a]));
		write(1, "\n", 1);
		a++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int		b;

	b = 0;
	while (s1[b] == s2[b] && s1[b])
		b++;
	return (s1[b] - s2[b]);
}

int	ft_strlen(char *str)
{
	int		c;

	c = 0;
	while (str[c] != '\0')
		c++;
	return (c);
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[j];
				argv[j] = temp;
			}
			j++;
		}
		i++;
	}
	ft_write(argc, argv);
	return (0);
}
