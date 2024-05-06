/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysbai-jo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:29:14 by ysbai-jo          #+#    #+#             */
/*   Updated: 2023/10/04 15:32:09 by ysbai-jo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	stri;
	int	o;

	stri = ac - 1;
	o = 0;
	while (stri > 0)
	{
		while (av[stri][o])
			write(1, &av[stri][o++], 1);
		write (1, "\n", 1);
		stri--;
		o = 0;
	}
	return (0);
}
