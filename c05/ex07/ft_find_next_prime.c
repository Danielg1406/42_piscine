/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-a <dgomez-a@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 11:39:43 by dgomez-a          #+#    #+#             */
/*   Updated: 2024/03/20 12:39:48 by dgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	prime;

	if (nb <= 2)
		return (2);
	prime = ft_is_prime(nb);
	if (prime == 1)
		return (nb);
	else
		return (ft_find_next_prime(nb + 1));
}

/*int	main(void)
{
	printf("%d\n", ft_find_next_prime(2));
	return (0);
}*/
