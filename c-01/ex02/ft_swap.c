/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschutz <pschutz@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 20:12:46 by pschutz           #+#    #+#             */
/*   Updated: 2023/07/23 13:52:17 by pschutz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/* #include <stdio.h>
int	main(void)
{
	int	a;
	int	b;

	a = 1;
	b = 2;
	printf("%d ", a);
	printf("%d", b);
	printf("\n");
	ft_swap(&a, &b);
	printf("%d ", a);
	printf("%d", b);

	return (0);
} */
