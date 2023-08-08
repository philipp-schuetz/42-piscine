/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschutz <pschutz@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 14:56:40 by pschutz           #+#    #+#             */
/*   Updated: 2023/07/24 10:25:22 by pschutz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	swapped;
	int	i;
	int	j;
	int	temp;

	swapped = 1;
	i = 0;
	j = 0;
	while (swapped)
	{
		swapped = 0;
		j = 0;
		while (j < size - 1 - i)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
				swapped = 1;
			}
			j++;
		}
		i++;
	}
}
/* #include <stdio.h>
int main(void)
{
	int	tab[] = {3, 1, 0, 2};
	int	i = 0;

	while (i < 4)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
	ft_sort_int_tab(tab, 4);
	i = 0;
	while (i < 4)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
	return (0);
} */
