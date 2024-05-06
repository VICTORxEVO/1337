/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysbai-jo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 12:10:04 by ysbai-jo          #+#    #+#             */
/*   Updated: 2023/09/23 12:10:06 by ysbai-jo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	m;

	m = 0;
	while (str[m])
	{
		if (str[m] >= 32 && str[m] < 127)
			m++;
		else
			return (0);
	}
	return (1);
}
