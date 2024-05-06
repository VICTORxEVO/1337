/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysbai-jo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:44:40 by ysbai-jo          #+#    #+#             */
/*   Updated: 2023/09/19 16:00:01 by ysbai-jo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(char x, char y)
{
	ft_putchar(x / 10 + '0');
	ft_putchar(x % 10 + '0');
	ft_putchar(' ');
	ft_putchar(y / 10 + '0');
	ft_putchar(y % 10 + '0');
	if (!(x == 98 && y == 99))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_print_numbers(a, b);
			b++;
		}
		a++;
	}
}
