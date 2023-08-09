/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschutz <pschutz@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 09:13:12 by pschutz           #+#    #+#             */
/*   Updated: 2023/07/26 14:33:58 by pschutz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alpha(int n)
{
	if ((n >= 65 && n <= 90) | (n >= 97 && n <= 122))
		return (1);
	else
		return (0);
}

int	is_digit(int n)
{
	if (n >= 48 && n <= 57)
		return (1);
	else
		return (0);
}

char	to_upper(char c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	else
		return (c);
}

char	to_lower(char c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	else
		return (c);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	capitalize_next;

	i = 0;
	capitalize_next = 1;
	while (str[i])
	{
		if (is_alpha(str[i]))
		{
			if (capitalize_next)
			{
				str[i] = to_upper(str[i]);
				capitalize_next = 0;
			}
			else
				str[i] = to_lower(str[i]);
		}
		else if (is_digit(str[i]))
			capitalize_next = 0;
		else
			capitalize_next = 1;
		i++;
	}
	return (str);
}
/* #include <stdio.h>
int main(void)
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s\n", str);
	ft_strcapitalize(str);
	printf("%s\n", str);
	return (0);
} */
