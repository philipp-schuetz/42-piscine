/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschutz <pschutz@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 18:50:15 by pschutz           #+#    #+#             */
/*   Updated: 2023/07/23 09:42:18 by pschutz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_number(int num)
{
	char	digits[2];

	digits[0] = '0' + num / 10;
	digits[1] = '0' + num % 10;
	write(1, digits, 2);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i <= 98)
	{
		while (j <= 99)
		{
			print_number(i);
			write(1, " ", 1);
			print_number(j);
			if (!(i == 98 && j == 99))
				write(1, ", ", 2);
			j++;
		}
		i++;
		j = i + 1;
	}
}
/* int	main(void)
{
	ft_print_comb2();
	return (0);
}
 */
