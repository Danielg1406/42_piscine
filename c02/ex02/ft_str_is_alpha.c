/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-a <dgomez-a@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 16:26:24 by dgomez-a          #+#    #+#             */
/*   Updated: 2024/03/12 14:38:28 by dgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
			return (0);
		++i;
	}
	return (1);
}

/*int	main(void)
{
	char	a;
	char	*ptr;
	int		result;

	ptr = &a;
	ptr = "hola.";
	result = ft_str_is_alpha(ptr);
	printf("%d\n", result);
	return (0);
}*/
