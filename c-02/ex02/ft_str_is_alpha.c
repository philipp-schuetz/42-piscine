/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschutz <pschutz@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 11:13:07 by pschutz           #+#    #+#             */
/*   Updated: 2023/07/25 12:01:12 by pschutz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123)))
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
	char string_alpha[] = "hello";
	char string_no_alpha[] = "@ello";

	printf("%d", ft_str_is_alpha(string_alpha));
	printf("\n");
	printf("%d", ft_str_is_alpha(string_no_alpha));
} */
