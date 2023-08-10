/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschutz <pschutz@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 13:44:46 by pschutz           #+#    #+#             */
/*   Updated: 2023/07/31 15:12:13 by pschutz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*dest_ptr;

	dest_ptr = dest;
	while (*dest_ptr != '\0')
		dest_ptr++;
	while (*src != '\0' && nb > 0)
	{
		*dest_ptr++ = *src++;
		nb--;
	}
	*dest_ptr = '\0';
	return (dest);
}
/* #include <stdio.h>
int	main(void) {
	char			dest[50] = "Hello, ";
	char			src[] = "world!";
	unsigned int	max_chars_to_concatenate = 5;

	ft_strncat(dest, src, max_chars_to_concatenate);
	printf("string: %s\n", dest);
	return (0);
} */
