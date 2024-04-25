/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-a <dgomez-a@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 16:52:37 by dgomez-a          #+#    #+#             */
/*   Updated: 2024/03/13 12:50:27 by dgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_c_num(char i)
{
	if (i == ' ' || i == '-' || i == '+')
	{
		return (1);
	}
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[0] != '\0' && (str[0] >= 'a' && str[0] <= 'z'))
	{
		str[0] = str[0] - 32;
		++i;
	}
	++i;
	while (str[i] != '\0')
	{
		if ((ft_c_num(str[i - 1]) == 1) && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] = str[i] - 32;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		++i;
	}
	return (str);
}

int	main(void)
{
	char	a[] = "saLut, CoMment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char	*ptr = &a[0];

	ft_strcapitalize(ptr);
	while (*ptr)
		write(1, ptr++, 1);
	return (0);
}
