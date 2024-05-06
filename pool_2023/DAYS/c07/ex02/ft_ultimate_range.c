/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysbai-jo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 22:17:40 by ysbai-jo          #+#    #+#             */
/*   Updated: 2023/10/05 14:32:43 by ysbai-jo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_len(int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
		return (-1);
	while (min < max)
	{
		i++;
		min++;
	}
	return (i);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*tab;
	int	len;

	len = ft_len(min, max);
	if (len < 0)
	{
		*range = NULL;
		return (0);
	}
	tab = malloc (sizeof(int) * len);
	if (!tab)
		return (-1);
	i = 0;
	while (i < len)
	{
		tab[i++] = min;
			min++;
	}
	*range = tab;
	return (len);
}
