/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-a <dgomez-a@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 21:11:00 by dgomez-a          #+#    #+#             */
/*   Updated: 2024/03/10 13:23:34 by dgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	if (str != NULL)
	{
		while (*str != '\0')
		{
			++len;
			++str;
		}
	}
	return (len);
}

/*int	main(void)
{
	char	c;
	char	*str;
	int	count;

	str = &c;
	str = "LOL";
	count = ft_strlen(str);
	printf("Length of the string: %d\n", count);
	return (0);
}*/
