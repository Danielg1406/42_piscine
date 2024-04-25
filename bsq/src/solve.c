/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchikita <mchikita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 20:54:25 by mchikita          #+#    #+#             */
/*   Updated: 2024/03/27 22:49:01 by mchikita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

size_t	find_biggest_square_size(t_map *map, size_t row, size_t col)
{
	size_t	size;
	size_t	i;

	size = 1;
	while ((row >= size) && (col >= size))
	{
		if (map->map[row - size][col - size] == map->rule.obst)
			return (size);
		i = 1;
		while (i < size + 1)
		{
			if (map->map[row - size + i][col - size] == map->rule.obst)
				return (size);
			if (map->map[row - size][col - size + i] == map->rule.obst)
				return (size);
			i++;
		}
		size++;
	}
	return (size);
}

void	fill_solution(t_map *map)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < map->sol.size)
	{
		map->map[map->sol.row - i][map->sol.col - i] = map->rule.full;
		j = 1;
		while (j < i + 1)
		{
			map->map[map->sol.row - i + j][map->sol.col - i] = map->rule.full;
			map->map[map->sol.row - i][map->sol.col - i + j] = map->rule.full;
			j++;
		}
		i++;
	}
}

void	assign_solution(t_map *map, size_t row, size_t col, size_t size)
{
	if (size > map->sol.size)
	{
		map->sol.size = size;
		map->sol.row = row;
		map->sol.col = col;
	}
}

void	solve(t_map *map)
{
	size_t	row;
	size_t	col;
	size_t	size;

	map->sol.size = 0;
	row = 0;
	while (row < map->rule.rows)
	{
		col = 0;
		while (col < map->rule.cols)
		{
			if (map->map[row][col] == map->rule.empty)
			{
				size = find_biggest_square_size(map, row, col);
				assign_solution(map, row, col, size);
			}
			col++;
		}
		row++;
	}
	fill_solution(map);
	print_map(map);
}
