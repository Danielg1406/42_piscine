/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-a <dgomez-a@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 22:13:06 by dgomez-a          #+#    #+#             */
/*   Updated: 2024/03/19 17:56:43 by dgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		++i;
	}
	while (i < n)
	{
		dest[i] = '\0';
		++i;
	}
	return (dest);
}

int	main(void)
{
	char	src[] = "Test!gbjdgbksgbksgbs";
	char	dest[] = "sssssssss";
	char	*psrc;
	char	*pdest;

	psrc = &src[0];
	pdest = &dest[0];
	ft_strncpy(pdest, psrc, 5);
	while (*pdest)
		write(1, pdest++, 1);
	return (0);
}
