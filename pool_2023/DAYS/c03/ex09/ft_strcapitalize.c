/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysbai-jo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 14:45:42 by ysbai-jo          #+#    #+#             */
/*   Updated: 2023/09/26 22:12:03 by ysbai-jo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

short int	not_alpha_nbr(char c);
void		low_case(char *str);

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	low_case(str);
	while (str[i])
	{
		if (not_alpha_nbr(str[i]))
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] -= 32;
		i++;
	}
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	return (str);
}

void	low_case(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
}

short int	not_alpha_nbr(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (0);
	if (c >= '0' && c <= '9')
		return (0);
	return (1);
}
