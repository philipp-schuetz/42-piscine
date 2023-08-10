/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschutz <pschutz@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 10:52:09 by pschutz           #+#    #+#             */
/*   Updated: 2023/08/07 13:16:08 by pschutz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int number)
{
	long	i;

	if (number <= 1)
		return (0);
	if (number <= 3)
		return (1);
	if (number % 2 == 0 || number % 3 == 0)
		return (0);
	i = 5;
	while (i * i <= number)
	{
		if (number % i == 0 || number % (i + 2) == 0)
			return (0);
		i += 6;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (1)
	{
		if (ft_is_prime(nb))
			return (nb);
		else
			nb++;
	}
}
/* #include <stdio.h>
int	main(void)
{
	printf("%d", ft_find_next_prime(2147483647));
	return (0);
} */
