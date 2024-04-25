/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-a <dgomez-a@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 19:37:05 by dgomez-a          #+#    #+#             */
/*   Updated: 2024/03/12 13:25:25 by dgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		++i;
	}
	return (str);
}

/*int	main(void)
{
	char	c[] = "Test!";
	char	*ptr = &c[0];

	ft_strupcase(ptr);
	while (*ptr)
	{
		write(1, ptr++, 1);
	}
	return (0);
}*/
