/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiler <adiler@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 19:54:10 by pschutz           #+#    #+#             */
/*   Updated: 2023/07/23 18:56:31 by adiler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush_04(int columns, int rows);
void	rush_03(int columns, int rows);
void	rush_02(int columns, int rows);
void	rush_01(int columns, int rows);
void	rush_00(int columns, int rows);

int	str_to_int(char *str)
{
	int	result;
	int	i;

	result = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			result = result * 10 + (str[i] - '0');
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (result);
}

int	main(int argc, char *argv[])
{
	int	columns;
	int	rows;

	if (argc == 3)
	{
		columns = str_to_int(argv[1]);
		rows = str_to_int(argv[2]);
		rush_00(columns, rows);
		rush_01(columns, rows);
		rush_02(columns, rows);
		rush_03(columns, rows);
		rush_04(columns, rows);
	}
	return (0);
}
