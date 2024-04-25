/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchikita <mchikita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 20:05:44 by dgomez-a          #+#    #+#             */
/*   Updated: 2024/03/27 20:21:19 by mchikita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

bool	check_rule(t_rule *rule)
{
	if (rule->empty == rule->full)
		return (false);
	if (rule->empty == rule->obst)
		return (false);
	if (rule->obst == rule->full)
		return (false);
	return (true);
}

bool	check_map(t_map *map)
{
	size_t	i;
	size_t	j;

	if (!check_rule(&map->rule))
		return (false);
	i = 0;
	while (i < map->rule.rows)
	{
		j = 0;
		while (map->map[i][j] != '\n')
		{
			if (map->map[i][j] != map->rule.empty
				&& map->map[i][j] != map->rule.obst)
				return (false);
			j++;
		}
		i++;
	}
	return (true);
}
