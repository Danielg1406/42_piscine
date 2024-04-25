/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchikita <mchikita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 13:25:00 by dgomez-a          #+#    #+#             */
/*   Updated: 2024/03/27 20:22:45 by mchikita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

bool	print_map(t_map *map)
{
	size_t	i;

	if (map == NULL)
		return (false);
	i = 0;
	while (i < map->rule.rows)
	{
		write(1, map->map[i], map->rule.cols + 1);
		i++;
	}
	return (true);
}
