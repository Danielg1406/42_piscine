/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-a <dgomez-a@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 15:46:47 by dgomez-a          #+#    #+#             */
/*   Updated: 2024/03/13 18:04:01 by dgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char	c[] = "Test!";
	char	b[10];
	//char	*src;
	char	*dest;

	
	//src = &c[0];
	//dest = &b[0];
	dest = ft_strcpy(&b[0], &c[0] );
	while (*dest != '\0')
	{
		write (1, dest++, 1);
	}
	return (0);
}
