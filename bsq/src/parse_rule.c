/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_rule.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchikita <mchikita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 12:02:26 by dgomez-a          #+#    #+#             */
/*   Updated: 2024/03/27 21:05:09 by mchikita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"
#include <stdlib.h>
#include <string.h>

bool	parse_rule(t_rule *rule, char **lines)
{
	size_t	line_len;
	char	*num_rows;

	line_len = ft_strlen(lines[0]);
	if (line_len < 5)
		return (false);
	rule->full = lines[0][line_len - 2];
	rule->obst = lines[0][line_len - 3];
	rule->empty = lines[0][line_len - 4];
	num_rows = malloc(line_len - 3);
	if (!num_rows)
		return (false);
	ft_strlcpy(num_rows, lines[0], line_len - 3);
	if (!ft_str_is_numeric(num_rows))
	{
		free(num_rows);
		return (false);
	}
	rule->rows = ft_atoi(num_rows);
	free(num_rows);
	rule->cols = ft_strlen(lines[1]) - 1;
	if (rule->cols == 0)
		return (false);
	return (true);
}
