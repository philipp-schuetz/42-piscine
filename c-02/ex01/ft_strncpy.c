/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschutz <pschutz@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 14:10:22 by pschutz           #+#    #+#             */
/*   Updated: 2023/07/24 14:54:02 by pschutz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/* #include <stdio.h>
int	main(void)
{
	const unsigned int limit = 5;
	int size = 5;

	char src[] = "hello";
	char dest[size];
	int i = 0;

	while (i < 5)
	{
		printf("%c", src[i]);
		i++;
	}
	printf("\n");
	ft_strncpy(dest, src, limit);
	i = 0;
	while (i < 5)
	{
		printf("%c", dest[i]);
		i++;
	}
} */
