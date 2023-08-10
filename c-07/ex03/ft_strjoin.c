/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschutz <pschutz@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 14:15:01 by pschutz           #+#    #+#             */
/*   Updated: 2023/08/09 15:19:38 by pschutz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*is_empty(void)
{
	char	*empty;

	empty = malloc(1);
	if (empty == NULL)
		return (NULL);
	empty[0] = '\0';
	return (empty);
}

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (str[size])
		size++;
	return (size);
}

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

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		i;
	int		j;
	int		len;

	i = 0;
	j = 0;
	len = 0;
	if (size <= 0 || strs == NULL)
		return (is_empty());
	while (i < size)
		len += ft_strlen(strs[i++]);
	len += (size - 1) * ft_strlen(sep) + 1;
	res = (char *)malloc(len);
	if (res == NULL)
		return (NULL);
	res[0] = '\0';
	while (j < size)
	{
		ft_strcat(res, strs[j++]);
		if (j < (size))
			ft_strcat(res, sep);
	}
	return (res);
}
/* #include <stdio.h>

int main(void) {
	// Test cases
	char *words[] = {"Hello", "world", "this", "is", "a", "test"};
	char *separator = ", ";

	// Regular test case
	char *result = ft_strjoin(6, words, separator);
	if (result != NULL) {
		printf("Concatenated String: %s\n", result);
		free(result);
	} else {
		printf("Memory allocation failed.\n");
	}

	// Test case with size 0
	result = ft_strjoin(0, NULL, separator);
	if (result != NULL) {
		printf("Concatenated String (Size 0): %s\n", result);
		free(result);
	} else {
		printf("Memory allocation failed.\n");
	}

	// Test case with empty array of strings
	char *empty_words[] = {};
	result = ft_strjoin(0, empty_words, separator);
	if (result != NULL) {
		printf("Concatenated String (Empty array of strings): %s\n", result);
		free(result);
	} else {
		printf("Memory allocation failed.\n");
	}

	// Test case with NULL array of strings
	result = ft_strjoin(2, NULL, separator);
	if (result != NULL) {
		printf("Concatenated String (NULL array of strings): %s\n", result);
		free(result);
	} else {
		printf("Memory allocation failed.\n");
	}

	// Test case with empty separator
	char *empty_separator = "";
	result = ft_strjoin(6, words, empty_separator);
	if (result != NULL) {
		printf("Concatenated String (Empty separator): %s\n", result);
		free(result);
	} else {
		printf("Memory allocation failed.\n");
	}

	// Test case with single-word array
	char *single_word[] = {"Hello"};
	result = ft_strjoin(1, single_word, separator);
	if (result != NULL) {
		printf("Concatenated String (Single-word array): %s\n", result);
		free(result);
	} else {
		printf("Memory allocation failed.\n");
	}

	return 0;
} */
