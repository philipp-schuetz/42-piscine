/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschutz <pschutz@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 12:33:12 by pschutz           #+#    #+#             */
/*   Updated: 2023/07/31 15:08:32 by pschutz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n > 0 && *s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return ((int)(unsigned char)(*s1) - (int)(unsigned char)(*s2));
}
/* #include <stdio.h>
int	main(void)
{
	char	*str1 = "Hello";
	char	*str2 = "Hello";
	char	*str3 = "World";
	char	*str4 = "Hell";

	printf("1, 2: %d\n", ft_strncmp(str1, str2, 5));
	printf("1, 3: %d\n", ft_strncmp(str1, str3, 5));
	printf("1, 4: %d\n", ft_strncmp(str1, str4, 5));
	return (0);
} */
