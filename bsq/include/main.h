/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchikita <mchikita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 20:28:31 by mchikita          #+#    #+#             */
/*   Updated: 2024/03/27 23:07:40 by mchikita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

# include <stdbool.h>
# include <unistd.h>

typedef struct s_rule
{
	char		empty;
	char		full;
	char		obst;
	size_t		rows;
	size_t		cols;
}				t_rule;

typedef struct s_solution
{
	size_t		row;
	size_t		col;
	size_t		size;
}				t_solution;

typedef struct s_map
{
	t_rule		rule;
	t_solution	sol;
	char		**map;
}				t_map;

size_t			count_lines(const char *filename);
char			**read_file(const char *filename, size_t *line_count);
void			free_lines(char **lines);

bool			print_map(t_map *map);
bool			check_map(t_map *map);
void			solve(t_map *map);
void			fill_solution(t_map *map);
bool			parse_map(t_map *map, char **lines, size_t line_count);
void			free_map(t_map *map, size_t line_count);

bool			parse_rule(t_rule *rule, char **lines);

void			ft_putstr(const char *str);
size_t			ft_strlen(const char *str);
char			*ft_strncpy(char *dest, const char *src, size_t n);
int				ft_atoi(char *str);
int				ft_str_is_numeric(char *str);
size_t			ft_strlcpy(char *dest, const char *src, size_t size);
int				ft_pow(int n, int pow);
void			*ft_simple_realloc(void *ptr, size_t orig_size,
					size_t new_size);

#endif