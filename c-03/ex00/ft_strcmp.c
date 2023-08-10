/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschutz <pschutz@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 10:42:55 by pschutz           #+#    #+#             */
/*   Updated: 2023/07/31 15:07:13 by pschutz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return ((unsigned char)(*s1) - (unsigned char)(*s2));
}
/* #include <stdio.h>
int	main(void)
{
	char	*str1 = "Hello";
	char	*str2 = "Hello";
	char	*str3 = "World";
	char	*str4 = "Hell";

	printf("1, 2: %d\n", ft_strcmp(str1, str2));
	printf("1, 3: %d\n", ft_strcmp(str1, str3));
	printf("1, 4: %d\n", ft_strcmp(str1, str4));
	return (0);
} */
