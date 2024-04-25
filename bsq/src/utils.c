/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchikita <mchikita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 11:36:13 by mchikita          #+#    #+#             */
/*   Updated: 2024/03/27 20:22:27 by mchikita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> // For malloc, free
#include <unistd.h>

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

int	ft_pow(int n, int pow)
{
	int	res;

	res = 1;
	if (pow == 0)
		return (1);
	if (pow < 0)
		return (0);
	while (pow >= 1)
	{
		res *= n;
		pow--;
	}
	return (res);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	res;
	int	i;

	res = 0;
	while (*str == ' ' || *str == '\t' || *str == '\r' || *str == '\n'
		|| *str == '\f' || *str == '\v')
		str++;
	sign = 1;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	i = 0;
	while (str[i] <= '9' && str[i] >= '0')
		i++;
	while (i-- > 0)
		res += *str++ % 48 * ft_pow(10, i);
	return (res * sign);
}

void	ft_putstr(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0')
	{
		++len;
	}
	write(1, str, len);
}
