/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdhanapa <kdhanapa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 15:13:19 by dgomez-a          #+#    #+#             */
/*   Updated: 2024/03/17 21:30:33 by dgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

struct		s_myPuzzle
{
	char	grid[4][4];
	char	up[4];
	char	down[4];
	char	left[4];
	char	right[4];
};

void		int_grid(char matrix[4][4]);
void		print_grid(char matrix[4][4]);
void		store_input(char *str, struct s_myPuzzle *puzzle);
int			solve_puzzle(struct s_myPuzzle *puzzle);

int	main(int argc, char **argv)
{
	struct s_myPuzzle	puzzle;

	if (argc != 2)
	{
		write(2, "ERROR\n", 6);
		return (1);
	}
	store_input(argv[1], &puzzle);
	int_grid(puzzle.grid);
	if (solve_puzzle(&puzzle) == 0)
		write(2, "ERROR\n", 6);
	print_grid(puzzle.grid);
	return (0);
}

void	store_input(char *str, struct s_myPuzzle *puzzle)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		if (*str >= '1' && *str <= '4')
		{
			if (i / 4 == 0)
				puzzle->up[i % 4] = *str;
			else if (i / 4 == 1)
				puzzle->down[i % 4] = *str;
			else if (i / 4 == 2)
				puzzle->left[i % 4] = *str;
			else
				puzzle->right[i % 4] = *str;
			++i;
		}
		++str;
	}
}
