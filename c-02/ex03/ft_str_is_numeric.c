/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschutz <pschutz@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 11:13:07 by pschutz           #+#    #+#             */
/*   Updated: 2023/07/25 12:01:36 by pschutz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 48 && str[i] <= 57))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/* #include <stdio.h>
int	main(void)
{
	char string_numeric[] = "1234";
	char string_no_numeric[] = "I23A";

	printf("%d", ft_str_is_numeric(string_numeric));
	printf("\n");
	printf("%d", ft_str_is_numeric(string_no_numeric));
} */
