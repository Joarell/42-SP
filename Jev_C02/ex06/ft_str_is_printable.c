/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza-c <jsouza-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 16:08:03 by jsouza-c          #+#    #+#             */
/*   Updated: 2021/07/30 23:42:31 by jsouza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char	*str);

int	ft_str_is_printable(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
