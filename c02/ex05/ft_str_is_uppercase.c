/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-a <dgomez-a@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 19:08:04 by dgomez-a          #+#    #+#             */
/*   Updated: 2024/03/12 14:33:29 by dgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		++i;
	}
	return (1);
}

/*int	main(void)
{
	char	a[] = "AA";
	char	*ptr;
	int		result;

	ptr = &a[0];
	result = ft_str_is_uppercase(ptr);
	printf("%d\n", result);
	return (0);
}*/
