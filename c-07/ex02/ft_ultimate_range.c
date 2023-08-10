/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschutz <pschutz@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 14:14:34 by pschutz           #+#    #+#             */
/*   Updated: 2023/08/09 15:02:59 by pschutz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * (max - min));
	if (*range == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (i);
}
/*
#include <stdio.h>

int main(void)
{
	int min, max;
	int *tab = NULL;
	int size;
	int i;

	// Normal case
	min = 5;
	max = 10;
	size = ft_ultimate_range(&tab, min, max);
	printf("Normal case:\n");
	printf("Size: %d\n", size);
	for (i = 0; i < size; ++i)
	{
		printf("%d ", tab[i]);
	}
	printf("\n");
	printf("\n");
	free(tab);


	// Edge case: min >= max
	min = 10;
	max = 5;
	size = ft_ultimate_range(&tab, min, max);
	printf("Edge case: min >= max:\n");
	printf("Size: %d\n", size);
	if (tab == NULL)
		printf("Range is NULL (as expected)\n");
	printf("\n");
	free(tab);

	// Edge case: min == max
	min = 5;
	max = 5;
	size = ft_ultimate_range(&tab, min, max);
	printf("Edge case: min == max:\n");
	printf("Size: %d\n", size);
	if (tab == NULL)
		printf("Range is NULL (as expected)\n");
	printf("\n");
	free(tab);

	// Edge case: NULL range
	size = ft_ultimate_range(&tab, 0, 0);
	printf("Edge case: NULL range:\n");
	printf("Size: %d\n", size);

	return 0;
} */
