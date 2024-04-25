/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchikita <mchikita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 19:38:23 by mchikita          #+#    #+#             */
/*   Updated: 2024/03/27 23:13:21 by mchikita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"
#include <stdio.h>

void	stdinput_main(char **lines, size_t *line_count, t_map *map)
{
	lines = read_file(NULL, line_count);
	if (*line_count > 1 && lines && parse_map(map, lines, *line_count))
		solve(map);
	else
		write(2, "map error\n", 10);
	free_lines(lines);
	free_map(map, *line_count);
}

int	main(int argc, char **argv)
{
	char		**lines;
	size_t		line_count;
	t_map		map;
	int			i;

	i = 0;
	while (argc > 1 && i < argc - 1)
	{
		line_count = 0;
		lines = read_file(argv[i++ + 1], &line_count);
		if (line_count > 1 && lines && parse_map(&map, lines, line_count))
			solve(&map);
		else
			write(2, "map error\n", 10);
		free_lines(lines);
		free_map(&map, line_count);
	}
	if (argc == 1)
	{
		stdinput_main(lines, &line_count, &map);
	}
	return (0);
}
