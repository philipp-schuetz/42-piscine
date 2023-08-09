/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschutz <pschutz@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 09:38:47 by pschutz           #+#    #+#             */
/*   Updated: 2023/07/26 14:38:52 by pschutz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	copy_size;
	unsigned int	i;

	src_len = 0;
	while (src[src_len])
		src_len++;
	copy_size = 0;
	if (size > 0)
		copy_size = size - 1;
	i = 0;
	while (i < copy_size && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (size > 0)
		dest[i] = '\0';
	return (src_len);
}
/* #include <stdio.h>
int main() {
	char src[] = "Hello, world!";
	char dest[20];
	unsigned int copied_len = ft_strlcpy(dest, src, sizeof(dest));

	printf("copied string: %s\n", dest);
	printf("length of src string: %u\n", copied_len);
	return (0);
} */
