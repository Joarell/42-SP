/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza-c <jsouza-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 22:22:08 by jsouza-c          #+#    #+#             */
/*   Updated: 2021/07/28 15:30:48 by jsouza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int	*tab, int	size);

void	ft_rev_int_tab(int	*tab, int	size)
{
	int	tmp;
	int	swap;

	swap = 0;
	tmp = 0;
	while (size-- >= swap)
	{
		tmp = tab[size];
		tab[size] = tab[swap];
		tab[swap] = tmp;
		swap++;
	}		
}
