/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-a <dgomez-a@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 18:10:54 by dgomez-a          #+#    #+#             */
/*   Updated: 2024/03/19 21:57:19 by dgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	factorial;

	factorial = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb > 12)
		return (0);
	return (nb * ft_recursive_factorial(nb - 1));
}

/*int	main(void)
{
	printf("%d\n", ft_recursive_factorial(5));
	return (0);
}*/
