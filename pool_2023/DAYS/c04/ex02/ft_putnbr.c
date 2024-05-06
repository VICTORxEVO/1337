/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysbai-jo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 23:11:01 by ysbai-jo          #+#    #+#             */
/*   Updated: 2023/10/02 17:44:57 by ysbai-jo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	nbmax;

	nbmax = nb;
	if (nbmax < 0)
	{
		nbmax *= -1;
		ft_putchar('-');
	}
	if (nbmax < 10)
		ft_putchar(nbmax + '0');
	else
	{
		ft_putnbr(nbmax / 10);
		ft_putchar(nbmax % 10 + '0');
	}
}
