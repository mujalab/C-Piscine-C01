/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mujmoham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 16:03:52 by mujmoham          #+#    #+#             */
/*   Updated: 2022/03/17 16:03:54 by mujmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int k;

	i = 0;
	k = 0;
	while (i < size)
	{
		k = i;
		while (k > 0 && tab[k] < tab[k - 1])
		{
			ft_swap(tab + k, tab + k - 1);
			k--;
		}
		i++;
	}
}
