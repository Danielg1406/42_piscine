/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-a <dgomez-a@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 11:36:53 by dgomez-a          #+#    #+#             */
/*   Updated: 2024/03/27 22:22:12 by dgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	arr = ((int *)malloc((max - min) * sizeof(int)));
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;

	*range = ft_range(min, max);
	if (*range == NULL)
		return (-1);
	if (min >= max)
		return (0);
	size = max - min;
	return (size);
}

/*#include <unistd.h>
#include <stdio.h>
int   main(int argc, char **argv)
{
        int     min;
        int     max;
        int     i;
        int     total;
        int     *a;

        if (argc != 3)
        {
                write(1, "Error\n", 6);
                return (1);
        }
        min = atoi(argv[1]);
        max = atoi(argv[2]);
        i = 0;
        a = ft_range(min, max);
	total = ft_ultimate_range(&a, min, max);
        while (i < total)
        {
                printf("%d ", a[i]);
                i++;
        }
	printf("\nthe size of the range is: %d\n", total);
        //free(a);
        return (0);
}*/
