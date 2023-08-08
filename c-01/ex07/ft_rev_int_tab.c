/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschutz <pschutz@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 14:25:12 by pschutz           #+#    #+#             */
/*   Updated: 2023/07/23 14:57:43 by pschutz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	j;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
		j--;
	}
}
/* #include <stdio.h>
int main(void)
{
	int	tab[] = {0, 1, 2, 3};
	int	i = 0;

	while (i < 4)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
	ft_rev_int_tab(tab, 4);
	i = 0;
	while (i < 4)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
	return (0);
} */
