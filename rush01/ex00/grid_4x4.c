/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid_4x4.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-a <dgomez-a@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 15:07:28 by dgomez-a          #+#    #+#             */
/*   Updated: 2024/03/17 21:27:26 by dgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	int_grid(char matrix[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			matrix[i][j] = '0';
			++j;
		}
		++i;
	}
}

void	print_grid(char matrix[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			write(1, &matrix[i][j], 1);
			if (j < 3)
				write(1, " ", 1);
			++j;
		}
		write(1, "\n", 1);
		++i;
	}
}
