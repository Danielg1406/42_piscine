/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-a <dgomez-a@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 09:52:36 by dgomez-a          #+#    #+#             */
/*   Updated: 2024/03/10 13:06:48 by dgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0) 
	{
		*div = a / b;
		*mod = a % b;
	}
}

/*int	main(void)
{
	int	a;
	int	b;
	int	*div;
	int	*mod;

	a = 4;
	b = 2;
	div = &a;
	mod = &b;
	ft_div_mod(a, b, div, mod);
	printf("divion = %d and remainder is %d\n", *div, *mod);
	return (0);
}*/
