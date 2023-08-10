/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschutz <pschutz@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 10:30:31 by pschutz           #+#    #+#             */
/*   Updated: 2023/08/07 13:23:05 by pschutz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	first;
	long	last;
	long	mid;

	first = 0;
	last = nb;
	while (first <= last)
	{
		mid = (first + last) / 2;
		if (mid * mid == nb)
			return (mid);
		else if (mid * mid > nb)
			last = mid - 1;
		else if (mid * mid < nb)
			first = mid + 1;
	}
	return (0);
}
/* #include <stdio.h>
int	main(void)
{
	printf("%d", ft_sqrt(2147483647));
} */
