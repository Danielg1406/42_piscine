/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-a <dgomez-a@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:29:50 by dgomez-a          #+#    #+#             */
/*   Updated: 2024/03/20 16:40:29 by dgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	count_dest;
	int	count_src;

	count_dest = 0;
	count_src = 0;
	while (dest[count_dest] != '\0')
		++count_dest;
	while (src[count_src] != '\0')
	{
		dest[count_dest] = src[count_src];
		++count_src;
		++count_dest;
	}
	dest[count_dest] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	d[40] = "Hello";
	char	s[] = " amazing world!\n";
	char	*ptr;

	ptr = ft_strcat(d, s);
	while (*ptr != '\0')
		write(1, ptr++, 1);
	return (0);
}*/
