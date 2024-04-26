/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-a <dgomez-a@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 11:22:23 by dgomez-a          #+#    #+#             */
/*   Updated: 2024/04/26 17:57:53 by dgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	num;
	int	neg_num;

	i = 0;
	num = 0;
	neg_num = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || 
		str[i] == '\r' || str[i] == '\f' || str[i] == '\v')
		++i;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			++neg_num;
		++i;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		++i;
	}
	if (neg_num % 2 == 1)
		num = -num;
	return (num);
}

/*#include <stdio.h>
#include <unistd.h>
int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	printf("%d\n", ft_atoi(argv[1]));
	return (0);
}*/
