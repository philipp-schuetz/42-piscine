/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiler <adiler@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 11:49:49 by pschutz           #+#    #+#             */
/*   Updated: 2023/07/23 18:59:36 by adiler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char ch);
void	print_first_row_r1(int columns);
void	print_middle_row_r1(int columns);
void	print_last_row_r1(int columns);

void	rush_01(int columns, int rows)
{
	int	current_row;

	current_row = 1;
	if (columns > 0 && rows > 0)
	{
		while (current_row <= rows)
		{
			if (current_row == 1)
			{
				print_first_row_r1(columns);
			}
			else if (current_row < rows)
			{
				print_middle_row_r1(columns);
			}
			else
			{
				print_last_row_r1(columns);
			}
			current_row++;
		}
	}
}

void	print_first_row_r1(int columns)
{
	int	i;

	if (columns == 1)
	{
		ft_putchar('/');
	}
	else
	{
		i = columns - 2;
		ft_putchar('/');
		while (i != 0)
		{
			ft_putchar('*');
			i--;
		}
		ft_putchar('\\');
	}
	ft_putchar('\n');
}

void	print_middle_row_r1(int columns)
{
	int	i;

	if (columns == 1)
	{
		ft_putchar('*');
	}
	else
	{
		i = columns - 2;
		ft_putchar('*');
		while (i != 0)
		{
			ft_putchar(' ');
			i--;
		}
		ft_putchar('*');
	}
	ft_putchar('\n');
}

void	print_last_row_r1(int columns)
{
	int	i;

	if (columns == 1)
	{
		ft_putchar('\\');
	}
	else
	{
		i = columns - 2;
		ft_putchar('\\');
		while (i != 0)
		{
			ft_putchar('*');
			i--;
		}
		ft_putchar('/');
	}
	ft_putchar('\n');
}
