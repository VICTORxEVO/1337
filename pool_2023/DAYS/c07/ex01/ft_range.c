/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysbai-jo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 21:47:50 by ysbai-jo          #+#    #+#             */
/*   Updated: 2023/10/05 12:06:53 by ysbai-jo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	arr_size(int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
		return (-1);
	while (min < max)
	{
		min++;
		i++;
	}
	return (i);
}

int	*ft_range(int min, int max)
{
	int	i;
	int	len;
	int	*arr;

	len = arr_size(min, max);
	if (len < 0)
		return (0);
	arr = malloc(sizeof(int) * len);
	if (!arr)
		return (NULL);
	i = 0;
	while (min < max)
	{
		arr[i++] = min;
		min++;
	}
	return (arr);
}
