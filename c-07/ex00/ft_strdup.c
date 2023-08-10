/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschutz <pschutz@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 14:13:48 by pschutz           #+#    #+#             */
/*   Updated: 2023/08/09 14:59:07 by pschutz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	str_len(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	if (src == NULL)
		return (NULL);
	dest = (char *)malloc(sizeof(char) * (str_len(src) + 1));
	if (dest == NULL)
		return (NULL);
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
	char str1[] = "Hello, world!";
	char *copy1 = ft_strdup(str1);
	printf("Original1: %s\n", str1);
	printf("Copy1: %s\n", copy1);
	free(copy1);

	char str2[] = "12345";
	char *copy2 = ft_strdup(str2);
	printf("Original2: %s\n", str2);
	printf("Copy2: %s\n", copy2);
	free(copy2);

	char str3[] = "";
	char *copy3 = ft_strdup(str3);
	printf("Original3: %s\n", str3);
	printf("Copy3: %s\n", copy3);
	free(copy3);

	// Edge case: Null source
	char *copy4 = ft_strdup(NULL);
	if (copy4 == NULL)
		printf("Null Source4: NULL\n");
	else
		printf("Copy4: %s\n", copy4);
	free(copy4);

	// Edge case: Source with only spaces
	char str5[] = "   ";
	char *copy5 = ft_strdup(str5);
	printf("Original5: %s\n", str5);
	printf("Copy5: %s\n", copy5);
	free(copy5);

	// Edge case: Out of memory
	char *copy7 = ft_strdup("Hello, world!");
	if (copy7 == NULL)
		printf("Out of Memory7: NULL\n");
	else
		printf("Copy7: %s\n", copy7);
	free(copy7);

	return (0);
} */
