/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recursion.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdhanapa <kdhanapa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 17:12:21 by dgomez-a          #+#    #+#             */
/*   Updated: 2024/03/17 22:12:56 by dgomez-a         ###   ########.fr       */
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
void		print_grid(char matrix[4][4]);
int			is_goal_state(struct s_myPuzzle *puzzle);

// check if a value already exist in a row
int	value_in_row(char grid[4][4], int row, char value)
{
	int	j;

	j = 0;
	while (j < 4)
	{
		if (grid[row][j] == value)
			return (1);
		++j;
	}
	return (0);
}

// check if a value already exist in a column
int	value_in_column(char grid[4][4], int column, char value)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (grid[i][column] == value)
			return (1);
		++i;
	}
	return (0);
}

// function to find an empty cell in the grid
int	is_valid(char grid[4][4], int row, int column, char value)
{
	return (!value_in_row(grid, row, value) && !value_in_column(grid, column,
			value));
}

// Function to find an empty cell in the grid
int	find_empty_cell(char grid[4][4], int *row, int *column)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (grid[i][j] == '0')
			{
				*row = i;
				*column = j;
				return (1);
			}
			++j;
		}
		++i;
	}
	return (0);
}

// function to solve the Skyscraper using backtracking
int	solve_puzzle(struct s_myPuzzle *puzzle)
{
	int		row;
	int		column;
	char	value;

	if (find_empty_cell(puzzle->grid, &row, &column) == 0)
	{
		if (is_goal_state(puzzle) == 1)
			return (1);
		return (0);
	}
	value = '1';
	while (value <= '4')
	{
		if (is_valid(puzzle->grid, row, column, value))
		{
			puzzle->grid[row][column] = value;
			if (solve_puzzle(puzzle) == 1)
				return (1);
			puzzle->grid[row][column] = '0';
		}
		++value;
	}
	return (0);
}
