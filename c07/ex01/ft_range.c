/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-a <dgomez-a@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 10:43:26 by dgomez-a          #+#    #+#             */
/*   Updated: 2024/03/22 11:42:05 by dgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <unistd.h>
//#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	arr = ((int *)malloc((max - min) * sizeof(int)));
	if (arr == 0)
		return (0);
	if (min >= max)
		return (0);
	i = 0;
	while (min < max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}

/*int	main(int argc, char **argv)
{
	int	min;
	int	max;
	int	i;
	int	total;
	int	*a;

	if (argc != 3)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	min = atoi(argv[1]);
	max = atoi(argv[2]);
	i = 0;
	total = max - min;
	a = ft_range(min, max);
	while (i < total)
	{
		printf("%d ", a[i]);
		i++;
	}
	free(a);
	return (0);
}*/
