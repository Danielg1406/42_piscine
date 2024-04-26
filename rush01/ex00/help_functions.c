/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-a <dgomez-a@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 16:40:48 by dgomez-a          #+#    #+#             */
/*   Updated: 2024/03/17 22:21:13 by dgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

struct		s_myPuzzle
{
	char	grid[4][4];
	char	up[4];
	char	down[4];
	char	left[4];
	char	right[4];
};

int	ft_check_row_left(char row[4], char value)
{
	int		i;
	char	highest;
	char	counter;

	counter = '0';
	i = 0;
	highest = '0';
	while (i < 4)
	{
		if (row[i] > highest)
		{
			++counter;
			highest = row[i];
		}
		++i;
	}
	if (value == counter)
		return (1);
	return (0);
}

int	ft_check_row_right(char row[4], char value)
{
	int		i;
	char	highest;
	char	counter;

	counter = '0';
	i = 3;
	highest = '0';
	while (i > -1)
	{
		if (row[i] > highest)
		{
			++counter;
			highest = row[i];
		}
		--i;
	}
	if (value == counter)
		return (1);
	return (0);
}

int	ft_check_column_up(char grid[4][4], int column, char value)
{
	int		i;
	char	highest;
	char	counter;

	counter = '0';
	i = 0;
	highest = '0';
	while (i < 4)
	{
		if (grid[i][column] > highest)
		{
			++counter;
			highest = grid[i][column];
		}
		++i;
	}
	if (value == counter)
		return (1);
	return (0);
}

int	ft_check_column_down(char grid[4][4], int column, char value)
{
	int		i;
	char	highest;
	char	counter;

	counter = '0';
	i = 3;
	highest = '0';
	while (i > -1)
	{
		if (grid[i][column] > highest)
		{
			++counter;
			highest = grid[i][column];
		}
		--i;
	}
	if (value == counter)
		return (1);
	return (0);
}

int	is_goal_state(struct s_myPuzzle *puzzle)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (ft_check_row_left(puzzle->grid[i], puzzle->left[i]) == 0)
			return (0);
		if (ft_check_row_right(puzzle->grid[i], puzzle->right[i]) == 0)
			return (0);
		if (ft_check_column_up(puzzle->grid, i, puzzle->up[i]) == 0)
			return (0);
		if (ft_check_column_down(puzzle->grid, i, puzzle->down[i]) == 0)
			return (0);
		++i;
	}
	return (1);
}
