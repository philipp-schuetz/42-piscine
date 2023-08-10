/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschutz <pschutz@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 13:47:59 by pschutz           #+#    #+#             */
/*   Updated: 2023/08/05 13:51:56 by pschutz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	if (argc > 1)
	{
		while (argv[i])
		{
			while (argv[i][j])
			{
				write(1, &argv[i][j], 1);
				j++;
			}
			write(1, "\n", 1);
			j = 0;
			i++;
		}
	}
	return (0);
}
