/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza-c <jsouza-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 21:48:46 by jsouza-c          #+#    #+#             */
/*   Updated: 2021/07/30 23:11:33 by jsouza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char	*str, char	*to_find)
{
	int	pos;
	int	ind;

	ind = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[ind] != '\0')
	{
		pos = 0;
		while (str[ind + pos] == to_find[pos] && str[ind + pos] != '\0')
		{
			if (to_find[pos + 1] == '\0')
				return (&str[ind]);
			pos++;
		}
		ind++;
	}
	return (0);
}
