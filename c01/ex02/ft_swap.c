/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-a <dgomez-a@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 09:28:18 by dgomez-a          #+#    #+#             */
/*   Updated: 2024/03/10 13:03:07 by dgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

/*int	main(void)
{
	int	number1;
	int	number2;
	int	*a;
	int	*b;

	number1 = 2;
	number2 = 1;
	a = &number1;
	b = &number2;
	ft_swap(a, b);
	printf("%d %d\n", number1, number2);
	return (0);
}*/
