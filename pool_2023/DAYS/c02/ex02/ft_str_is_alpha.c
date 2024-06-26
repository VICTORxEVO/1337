/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysbai-jo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 22:39:17 by ysbai-jo          #+#    #+#             */
/*   Updated: 2023/10/01 22:40:00 by ysbai-jo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	alpha(char c);

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (!(alpha(str[i])))
			return (0);
	}
	return (1);
}

int	alpha(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
