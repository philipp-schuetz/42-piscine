/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiler <adiler@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 11:49:49 by pschutz           #+#    #+#             */
/*   Updated: 2023/07/23 17:56:14 by adiler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char ch);
void	print_first_row(int columns);
void	print_middle_row(int columns);
void	print_last_row(int columns);

void	rush_04(int columns, int rows)
{
	int	current_row;

	current_row = 1;
	if (columns > 0 && rows > 0)
	{
		while (current_row <= rows)
		{
			if (current_row == 1)
			{
				print_first_row(columns);
			}
			else if (current_row < rows)
			{
				print_middle_row(columns);
			}
			else
			{
				print_last_row(columns);
			}
			current_row++;
		}
	}
}

void	print_first_row(int columns)
{
	int	i;

	if (columns == 1)
	{
		ft_putchar('A');
	}
	else
	{
		i = columns - 2;
		ft_putchar('A');
		while (i != 0)
		{
			ft_putchar('B');
			i--;
		}
		ft_putchar('C');
	}
	ft_putchar('\n');
}

void	print_middle_row(int columns)
{
	int	i;

	if (columns == 1)
	{
		ft_putchar('B');
	}
	else
	{
		i = columns - 2;
		ft_putchar('B');
		while (i != 0)
		{
			ft_putchar(' ');
			i--;
		}
		ft_putchar('B');
	}
	ft_putchar('\n');
}

void	print_last_row(int columns)
{
	int	i;

	if (columns == 1)
	{
		ft_putchar('C');
	}
	else
	{
		i = columns - 2;
		ft_putchar('C');
		while (i != 0)
		{
			ft_putchar('B');
			i--;
		}
		ft_putchar('A');
	}
	ft_putchar('\n');
}
