/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-a <dgomez-a@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 10:15:37 by dgomez-a          #+#    #+#             */
/*   Updated: 2024/04/26 17:54:57 by dgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		++i;
	}
	if (s1[i] == '\0' && s2[i] != '\0')
		return (s1[i] - s2[i]);
	else if (s1[i] != '\0' && s2[i] == '\0')
		return (s1[i] - s2[i]);
	else
		return (0);
}

/*int	main(void)
{
	char	a[] = "aaa";
	char	b[] = "aaaa";
	char	*s1 = &a[0];
	char	*s2 = &b[0];
	int		result;

	result = ft_strcmp(s1, s2);
	printf("%d\n", result);
	return (0);
}*/
