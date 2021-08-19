/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza-c <jsouza-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 08:48:23 by jsouza-c          #+#    #+#             */
/*   Updated: 2021/07/31 09:28:51 by jsouza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
void	ft_putnbr(int	nb);

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int	nb)
{
	int				i;
	int				n[13];
	int				mod;
	unsigned int	num;

	i = 0;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * (-1);
	}
	num = nb;
	while (num >= 10)
	{
		mod = num % 10;
		num = num / 10;
		n[i] = mod;
		i++;
	}
	n[i] = num;
	while (i >= 0)
	{
		ft_putchar(n[i] + '0');
		i--;
	}
}
