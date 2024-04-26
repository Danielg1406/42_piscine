/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-a <dgomez-a@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:42:19 by dgomez-a          #+#    #+#             */
/*   Updated: 2024/03/14 11:00:04 by dgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	count_dest;
	unsigned int	count_src;

	count_dest = 0;
	count_src = 0;
	while (dest[count_dest] != '\0')
		++count_dest;
	while (src[count_src] != '\0' && count_src < nb)
	{
		dest[count_dest] = src[count_src];
		++count_dest;
		++count_src;
	}
	dest[count_dest] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	a[] = "Hello";
	char	b[] = " World";
	char	*ptr;

	ptr = ft_strncat(&a[0], &b[0], 3);
	while(*ptr != '\0')
		write(1, ptr++, 1);
	return (0);
}*/
