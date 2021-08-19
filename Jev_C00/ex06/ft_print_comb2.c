/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza-c <jsouza-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 20:06:14 by jsouza-c          #+#    #+#             */
/*   Updated: 2021/07/28 03:03:26 by jsouza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);

void	ft_putchar(char num)
{
	write (1, &num, 1);
}

void	ft_print_comb2(void)
{
	char	first;
	char	second;

	second = 0;
	while (second < 99)
	{
		first = 1;
		while (first <= 99)
		{
			ft_putchar(second / 10 + '0');
			ft_putchar(second % 10 + '0');
			write (1, " ", 1);
			ft_putchar (first / 10 + '0');
			ft_putchar (first % 10 + '0');
			first++;
			if (second != 99)
				write (1, ", ", 2);
		}
		second++;
	}
	write (1, "\b", 1);
	write (1, "\b", 1);
}
