/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchikita <mchikita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 11:40:37 by mchikita          #+#    #+#             */
/*   Updated: 2024/03/27 21:10:17 by mchikita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"
#include <stdlib.h>

bool	map_init(t_map *map)
{
	map->map = NULL;
	map->rule.rows = 0;
	map->rule.cols = 0;
	map->rule.empty = '\0';
	map->rule.full = '\0';
	map->rule.obst = '\0';
	map->sol.col = 0;
	map->sol.row = 0;
	map->sol.size = 0;
	return (true);
}

bool	parse_map(t_map *map, char **lines, size_t line_count)
{
	size_t	i;

	map_init(map);
	if (!parse_rule(&map->rule, lines) || line_count - 1 != map->rule.rows)
		return (false);
	i = 0;
	map->map = malloc((map->rule.rows + 1) * sizeof(char *));
	if (!map->map)
		return (false);
	while (i < map->rule.rows)
	{
		if (ft_strlen(lines[i + 1]) != map->rule.cols + 1)
			return (false);
		map->map[i] = (char *)malloc(map->rule.cols + 2);
		if (!map->map[i])
			return (false);
		if (ft_strlcpy(map->map[i], lines[i + 1], map->rule.cols
				+ 2) >= map->rule.cols + 2)
			return (false);
		i++;
		map->map[i] = NULL;
	}
	if (!check_map(map))
		return (false);
	return (true);
}

void	free_map(t_map *map, size_t line_count)
{
	size_t	i;

	i = 0;
	if (line_count - 1 != map->rule.rows)
		return ;
	while (map->map[i])
	{
		free(map->map[i]);
		i++;
	}
	free(map->map);
}
