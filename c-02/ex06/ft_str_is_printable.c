/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschutz <pschutz@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 12:03:43 by pschutz           #+#    #+#             */
/*   Updated: 2023/07/25 12:26:17 by pschutz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 31))
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
	char string_printable[] = "hello...";
	char string_not_printable[] = "hello\n\r";

	printf("%d", ft_str_is_printable(string_printable));
	printf("\n");
	printf("%d", ft_str_is_printable(string_not_printable));
}
 */
