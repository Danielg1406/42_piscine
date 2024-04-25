/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-a <dgomez-a@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 15:40:12 by dgomez-a          #+#    #+#             */
/*   Updated: 2024/03/10 13:21:44 by dgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		++str;
	}
}

/*int	main(void)
{
	char	c;
	char	*str;

	str = &c;
	str = "LOL";
	ft_putstr(str);
	return (0);
}*/
