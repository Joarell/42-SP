/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza-c <jsouza-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 01:28:51 by jsouza-c          #+#    #+#             */
/*   Updated: 2021/07/28 18:15:19 by jsouza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int	*tab, int	size);

void	ft_sort_int_tab(int	*tab, int	size)
{	
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i <= size)
	{
		j = 0;
		while (tab[j + i] < tab[size - 1 + i])
		{
			if (tab[j] > tab[j + 1])
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
			}			
			j++;
		}
		i++;
	}
}
