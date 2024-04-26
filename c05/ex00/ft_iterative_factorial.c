/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-a <dgomez-a@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 17:23:59 by dgomez-a          #+#    #+#             */
/*   Updated: 2024/03/19 18:15:27 by dgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	factorial;

	factorial = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		if (nb > 12)
			return (0);
		factorial = nb * factorial;
		nb --;
	}
	return (factorial);
}

/*int	main(void)
{
	printf("%d\n", ft_iterative_factorial(12));
	return (0);
}*/
