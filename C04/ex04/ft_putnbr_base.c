/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 09:08:13 by gumendes          #+#    #+#             */
/*   Updated: 2024/08/11 16:23:28 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str);

void	ft_base2(int nb)
{
	int	i;
	int	j;
	char	temp[50];

	i = 0;
	while (nb > 0)
	{
		temp[i] = nb % 2 + '0';
		nb = nb / 2;
		i++;
	}
	j = i - 1;
	while (j >= 0)
	{
		write(1, &temp[j], 1);
		j--;
	}
}

void    ft_base8(int nb)
{
        int     i;
        int     j;
        char    temp[50];

        i = 0;
        while (nb > 0)
        {
                temp[i] = nb % 8 + '0';
                nb = nb / 8;
                i++;
        }
        j = i - 1;
        while (j >= 0)
        {
                write(1, &temp[j], 1);
                j--;
        }
}

void ft_base16(int nb)
{
    int	i = 0;
    int	j;
    char temp[50];

    if (nb == 0)
    {
        write(1, "0", 1);
        return;
    }

    while (nb > 0)
    {
        int remainder = nb % 16;
        temp[i++] = (remainder < 10) ? (remainder + '0') : (remainder - 10 + 'A');
        nb /= 16;
    }

    j = i - 1;
    while (j >= 0)
        write(1, &temp[j--], 1);
}

int	main(void)
{
	ft_base16(123);
}
