/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza-c <jsouza-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 21:06:22 by jsouza-c          #+#    #+#             */
/*   Updated: 2021/07/28 02:31:53 by jsouza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);

void	print(char	u, char	t, char	c)
{
	write (1, &c, 1);
	write (1, &t, 1);
	write (1, &u, 1);
	write (1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	unit;
	char	ten;
	char	cent;

	unit = 49;
	cent = 48;
	while (cent <= '7')
	{
		ten = cent;
		while (ten++ <= '8')
		{
			unit = ten + 1;
			while (unit <= '9')
			{
				print(unit, ten, cent);
				if (cent <= '7')
				{
					unit++;
				}				
			}
		}
		cent++;
	}
	write (1, "\b", 1);
	write (1, "\b", 1);
}
