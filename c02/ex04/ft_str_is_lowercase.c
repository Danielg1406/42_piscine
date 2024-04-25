/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-a <dgomez-a@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 18:49:57 by dgomez-a          #+#    #+#             */
/*   Updated: 2024/03/12 21:15:01 by dgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		++i;
	}
	return (1);
}

/*int	main(void)
{
	char	a[] = "abc";
	char	*ptr;
	int		result;

	ptr = &a[0];
	result = ft_str_is_lowercase(ptr);
	printf("%d\n", result);
	return (0);
}*/
