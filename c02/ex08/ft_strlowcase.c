/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-a <dgomez-a@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:26:45 by dgomez-a          #+#    #+#             */
/*   Updated: 2024/03/12 13:37:09 by dgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		++i;
	}
	return (str);
}

/*int	main(void)
{
	char	c[] = "TEST!";
	char	*ptr = &c[0];

	ft_strlowcase(ptr);
	while (*ptr)
	{
		write(1, ptr++, 1);
	}
	return (0);
}*/
