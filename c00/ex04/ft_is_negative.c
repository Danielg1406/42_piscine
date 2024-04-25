/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-a <dgomez-a@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 16:10:21 by dgomez-a          #+#    #+#             */
/*   Updated: 2024/03/07 18:32:50 by dgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	letter;

	if (n < 0) 
	{
		letter = 'N';
		write(1, &letter, 1);
	}
	else
	{
		letter = 'P';
		write(1, &letter, 1);
	}
	return ;
}

/*int	main(void)
{
	int	number;

	number = -2;
	ft_is_negative(number);
	return (0);
}*/
