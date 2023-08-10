/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschutz <pschutz@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 13:55:30 by pschutz           #+#    #+#             */
/*   Updated: 2023/08/07 13:26:59 by pschutz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_space(char c)
{
	return (c == ' ' || c == '\f' || c == '\n'
		|| c == '\r' || c == '\t' || c == '\v');
}

int	is_alpha(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int	is_sign(char c)
{
	return (c == '-' || c == '+');
}

int	ft_atoi(char *str)
{
	int	i;
	int	dash_count;
	int	number;

	i = 0;
	dash_count = 0;
	number = 0;
	while (str[i] && (is_space(str[i]) || is_alpha(str[i]) || is_sign(str[i])))
	{
		if (str[i] == '-')
			dash_count++;
		if (dash_count > 0 && (is_space(str[i]) || is_alpha(str[i])))
			return (0);
		i++;
	}
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			number = number * 10 + (str[i] - '0');
		i++;
	}
	if (dash_count % 2 != 0)
		number *= -1;
	return (number);
}
/* #include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_atoi("   ---+++--372568jhgf"));
	printf("%d\n", ft_atoi("0254608"));
	printf("%d\n", ft_atoi(" \n --+++--4597"));
	printf("%d\n", ft_atoi("asdf -++++- -347"));
}
 */
