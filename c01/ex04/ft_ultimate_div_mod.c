/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-a <dgomez-a@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 13:56:10 by dgomez-a          #+#    #+#             */
/*   Updated: 2024/03/10 13:17:47 by dgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	division;
	int	remainder;

	if (*b != 0)
	{
		division = *a / *b;
		remainder = *a % *b;
		*a = division;
		*b = remainder;
	}
}

/*int	main(void)
{
	int	number1;
	int	number2;
	int	*a;
	int	*b;

	number1 = 4;
	number2 = 2;
	a = &number1;
	b = &number2;
	ft_ultimate_div_mod(a, b);
	printf("the result of the division is %d and the remainder is %d", *a, *b);
	return (0);
}*/
