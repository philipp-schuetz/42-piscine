/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschutz <pschutz@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 12:41:26 by pschutz           #+#    #+#             */
/*   Updated: 2023/07/31 15:10:21 by pschutz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*dest_ptr;

	dest_ptr = dest;
	while (*dest_ptr != '\0')
		dest_ptr++;
	while (*src != '\0')
		*dest_ptr++ = *src++;
	*dest_ptr = '\0';
	return (dest);
}
/* #include <stdio.h>
int	main(void)
{
	char	dest[50] = "Hello, ";
	char	src[] = "world!";

	ft_strcat(dest, src);
	printf("Concatenated string: %s\n", dest);
	return (0);
} */
