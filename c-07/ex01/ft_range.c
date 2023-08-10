/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschutz <pschutz@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 14:14:07 by pschutz           #+#    #+#             */
/*   Updated: 2023/08/09 15:01:18 by pschutz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	if (min >= max)
		return (NULL);
	arr = malloc(sizeof(int) * (max - min));
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}
/* #include <stdio.h>

int main(void)
{
	// Test cases
	int *range1 = ft_range(5, 10);
	printf("Range1: ");
	for (int i = 0; i < 5; ++i)
		printf("%d ", range1[i]);
	printf("\n");
	free(range1);

	int *range2 = ft_range(-3, 3);
	printf("Range2: ");
	for (int i = 0; i < 6; ++i)
		printf("%d ", range2[i]);
	printf("\n");
	free(range2);

	// Edge cases
	int *range3 = ft_range(10, 5);
	if (range3 == NULL)
		printf("Edge Case3: Invalid range\n");
	else
		printf("Edge Case3: Successfully created range\n");
	free(range3);

	int *range4 = ft_range(5, 5);
	if (range4 == NULL)
		printf("Edge Case4: Invalid range\n");
	else
		printf("Edge Case4: Successfully created range\n");
	free(range4);

	int *range5 = ft_range(0, 0);
	if (range5 == NULL)
		printf("Edge Case5: Invalid range\n");
	else
		printf("Edge Case5: Successfully created range\n");
	free(range5);

	int *range6 = ft_range(-5, -5);
	if (range6 == NULL)
		printf("Edge Case6: Invalid range\n");
	else
		printf("Edge Case6: Successfully created range\n");
	free(range6);

	int *range7 = ft_range(-5, 5);
	if (range7 == NULL)
		printf("Edge Case7: Invalid range\n");
	else
	{
		printf("Edge Case7: ");
		for (int i = 0; i < 10; ++i)
			printf("%d ", range7[i]);
		printf("\n");
		free(range7);
	}

	return 0;
} */
