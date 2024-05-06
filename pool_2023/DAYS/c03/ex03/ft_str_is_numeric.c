/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysbai-jo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 11:48:28 by ysbai-jo          #+#    #+#             */
/*   Updated: 2023/09/23 11:54:49 by ysbai-jo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	f;

	f = 0;
	while (str[f])
	{
		if (str[f] >= '0' && str[f] <= '9')
			f++;
		else
			return (0);
	}
	return (1);
}
