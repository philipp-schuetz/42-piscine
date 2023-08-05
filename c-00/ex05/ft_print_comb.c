/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschutz <pschutz@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 10:03:00 by pschutz           #+#    #+#             */
/*   Updated: 2023/07/23 09:51:00 by pschutz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_stuff(int i, int j, int k)
{
	write(1, &i, 1);
	write(1, &j, 1);
	write(1, &k, 1);
	if (i < 55 || j < 56 || k < 57)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 48;
	j = 49;
	k = 50;
	while (i <= 55)
	{
		while (j <= 56)
		{
			while (k <= 57)
			{
				write_stuff(i, j, k);
				k++;
			}
			j++;
			k = j + 1;
		}
		i++;
		j = i + 1;
		k = j + 1;
	}
}
/* int	main(void)
{
	ft_print_comb();
	return (0);
} */
