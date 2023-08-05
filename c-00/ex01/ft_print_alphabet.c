/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschutz <pschutz@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 11:47:27 by pschutz           #+#    #+#             */
/*   Updated: 2023/07/23 09:45:27 by pschutz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	i;

	i = 97;
	while (i < 123)
	{
		write(1, &i, 1);
		i++;
	}
}
/* int	main(void)
{
	ft_print_alphabet();
	return (0);
} */
