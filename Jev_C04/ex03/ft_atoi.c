/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza-c <jsouza-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 22:27:59 by jsouza-c          #+#    #+#             */
/*   Updated: 2021/07/31 10:57:03 by jsouza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char	*str);

int	ft_atoi(char	*str)
{
	int	i;
	int	num;
	int	sign;

	i = 0;
	sign = 1;
	while (str[i] <= 32)
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	num = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num *= 10;
		num += (str[i] - 48) * sign;
		i++;
	}
	return (num);
}
