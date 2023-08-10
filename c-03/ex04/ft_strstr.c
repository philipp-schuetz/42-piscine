/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschutz <pschutz@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 13:46:49 by pschutz           #+#    #+#             */
/*   Updated: 2023/08/01 10:02:44 by pschutz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*str_ptr;
	char	*to_find_ptr;
	char	*found_ptr;

	if (*to_find == '\0')
		return (str);
	str_ptr = str;
	while (*str_ptr)
	{
		if (*str_ptr == *to_find)
		{
			to_find_ptr = to_find;
			found_ptr = str_ptr;
			while (*to_find_ptr && *str_ptr && *to_find_ptr == *str_ptr)
			{
				to_find_ptr++;
				str_ptr++;
			}
			if (*to_find_ptr == '\0')
				return (found_ptr);
			str_ptr = found_ptr;
		}
		str_ptr++;
	}
	return (0);
}
/* #include <stdio.h>
int	main(void)
{
	char	str[] = "Hello, world!";
	char	to_find1[] = "world";
	char	to_find2[] = "universe";

	char	*result1 = ft_strstr(str, to_find1);
	char	*result2 = ft_strstr(str, to_find2);

	if (result1 != str)
		printf("substring at position: %ld\n", result1 - str);
	else
		printf("no substring.\n");
	if (*result2 == '\0')
		printf("no substring.\n");
	else
		printf("substring at position: %ld\n", result2 - str);
	return (0);
} */
/* #include <stdio.h>
#include <string.h>
int main(void)
{
	char	arr1[] = "This is not su, or sub, or my other sub, but my main string";
	char	arr2[] = "sub";
	char	arr3[] = "you cannot find me";
	char	arr4[] = "";

	printf("My %p \n", ft_strstr(arr1, arr2));
	printf("Of %p \n", strstr(arr1, arr2));
	printf("My %p \n", ft_strstr(arr1, arr3));
	printf("Of %p \n", strstr(arr1, arr3));
	printf("My %p \n", ft_strstr(arr1, arr4));
	printf("Of %p \n", strstr(arr1, arr4));
	printf("My %p \n", ft_strstr(arr4, arr1));
	printf("Of %p \n", strstr(arr4, arr1));
} */
