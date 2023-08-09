/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschutz <pschutz@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 12:03:43 by pschutz           #+#    #+#             */
/*   Updated: 2023/07/25 12:18:10 by pschutz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] > 64 && str[i] < 91))
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
	char string_uppercase[] = "HELLO";
	char string_lowercase[] = "hello";

	printf("%d", ft_str_is_uppercase(string_uppercase));
	printf("\n");
	printf("%d", ft_str_is_uppercase(string_lowercase));
} */
