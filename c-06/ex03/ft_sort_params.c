/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschutz <pschutz@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 14:11:34 by pschutz           #+#    #+#             */
/*   Updated: 2023/08/05 16:15:53 by pschutz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(const char *s1, const char *s2)
{
	if (*s1 && *s2 && *s1 == *s2)
		return (ft_strcmp(s1 + 1, s2 + 1));
	else
		return (*s1 - *s2);
}

void	ft_swap(char **str1, char **str2)
{
	char	*temp;

	temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}

void	ft_sort_args_recursive(char *argv[], int argc, int i)
{
	int	j;

	if (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
				ft_swap(&argv[i], &argv[j]);
			j++;
		}
		ft_sort_args_recursive(argv, argc, i + 1);
	}
}

void	ft_putstr(const char *str)
{
	if (*str)
	{
		write(1, str, 1);
		ft_putstr(str + 1);
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	ft_sort_args_recursive(argv, argc, 1);
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
