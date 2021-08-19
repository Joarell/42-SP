/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza-c <jsouza-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 14:42:31 by jsouza-c          #+#    #+#             */
/*   Updated: 2021/07/30 19:18:56 by jsouza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char	*str);

int	ft_str_is_numeric(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 48 || str[i] > 57)
		{
			return (0);
		}
		i++;
	}	
	return (1);
}
