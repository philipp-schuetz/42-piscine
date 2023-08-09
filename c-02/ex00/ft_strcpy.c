/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschutz <pschutz@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 10:40:48 by pschutz           #+#    #+#             */
/*   Updated: 2023/07/26 16:36:19 by pschutz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/* #include <stdio.h>
int	main(void)
{
	char src[] = "hello";
	char dest[6];

	printf("%s", src);

	printf("\n");
	ft_strcpy(dest, src);
	printf("%s", dest);
}
 */
