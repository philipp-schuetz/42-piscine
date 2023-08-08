/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschutz <pschutz@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 20:27:13 by pschutz           #+#    #+#             */
/*   Updated: 2023/07/23 14:04:29 by pschutz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;

	div = *a / *b;
	*b = *a % *b;
	*a = div;
}
/* #include <stdio.h>
int	main(void)
{
	int a = 8;
	int b = 4;
	ft_ultimate_div_mod(&a, &b);
	printf("a:%d  b:%d", a, b);
	return (0);
} */
