/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschutz <pschutz@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 12:03:43 by pschutz           #+#    #+#             */
/*   Updated: 2023/07/25 12:10:00 by pschutz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] > 96 && str[i] < 123))
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
	char string_lowercase[] = "hello";
	char string_uppercase[] = "Hello";

	printf("%d", ft_str_is_lowercase(string_lowercase));
	printf("\n");
	printf("%d", ft_str_is_lowercase(string_uppercase));
} */
