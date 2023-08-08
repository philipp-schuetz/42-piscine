/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschutz <pschutz@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 20:23:12 by pschutz           #+#    #+#             */
/*   Updated: 2023/07/23 13:58:45 by pschutz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/* #include <stdio.h>
int	main(void)
{
	int	div;
	int	mod;

	ft_div_mod(8, 4, &div, &mod);
	printf("a:%d  b:%d  div:%d  mod:%d", 8, 4, div, mod);

	return (0);
} */
