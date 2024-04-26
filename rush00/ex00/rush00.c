/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-a <dgomez-a@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 17:24:54 by dgomez-a          #+#    #+#             */
/*   Updated: 2024/03/10 22:51:03 by dgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_puterror(char *str)
{
	while (*str != '\0')
	{
		write(2, str, 1);
		++str;
	}
}

void	print_row(int x, char left, char middle, char right)
{
	int	counter_x;

	counter_x = 0; 
	while (counter_x < x)
	{
		if (counter_x == 0) 
			ft_putchar(left);
		else if (counter_x == x - 1)
			ft_putchar(right);
		else
			ft_putchar(middle);
		++counter_x;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	counter_y;

	if (x > 0 & y > 0)
	{
		print_row(x, 'o', '-', 'o');
		counter_y = 0;
		while (counter_y < y - 2)
		{
			print_row(x, '|', ' ', '|');
			++counter_y;
		}
		if (y > 1)
			print_row(x, 'o', '-', 'o');
	}
	else
		ft_puterror("error: Please use values greater than 0\n");
}
