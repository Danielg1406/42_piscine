/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-a <dgomez-a@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 18:46:10 by dgomez-a          #+#    #+#             */
/*   Updated: 2024/03/08 14:57:56 by dgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '/';
	while (a++ < '6')
	{
		b = a;
		while (b++ < '8')
		{
			c = b;
			while (c++ < '9')
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				write(1, ", ", 2);
			}
		}
	}
	write(1, "789", 3);
}

/*int	main(void)
{
	ft_print_comb();
	return (0);
}*/
