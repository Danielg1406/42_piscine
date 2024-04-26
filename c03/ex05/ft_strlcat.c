/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-a <dgomez-a@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 17:37:34 by dgomez-a          #+#    #+#             */
/*   Updated: 2024/03/21 10:32:08 by dgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	count_dest;
	unsigned int	count_src;

	count_dest = 0;
	count_src = 0;
	while (dest[count_dest] != '\0')
		count_dest++;
	while (src[count_src] != '\0')
		count_src++;
	if (size == 0)
		return (count_dest + count_src);
	if (count_dest < size - 1)
	{
		while (src[count_src] != '\0' && count_dest < size - 1)
		{
			dest[count_dest] = src[count_src];
			count_src++;
			count_dest++;
		}
		dest[count_dest] = '\0';
	}
	return (count_dest + count_src);
}

/*int	main(void)
{
	char	d[] = "Hello";
	char	s[] = " World!";
	unsigned int	result;

	result = ft_strlcat(d, s, 5);
	printf("%d\n", result); 
	return(0);
}*/
