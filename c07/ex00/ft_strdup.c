/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-a <dgomez-a@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 21:05:46 by dgomez-a          #+#    #+#             */
/*   Updated: 2024/03/27 22:22:36 by dgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <unistd.h>

int	ft_strlen(char *src)
{
	int	len;

	len = 0;
	while (*src != '\0')
	{
		len++;
		src++;
	}
	return (len);
}

char	*ft_strdup(char *src)
{
	char	*copy;
	int		len;
	int		j;

	len = ft_strlen(src);
	copy = ((char *)malloc((len + 1) * sizeof(char)));
	if (copy == NULL)
		return (NULL);
	j = 0;
	while (src[j] != '\0')
	{
		copy[j] = src[j];
		j++;
	}
	copy[j] = '\0';
	return (copy);
}

/*int	main(void)
{
	char	*ptr;

	ptr = ft_strdup("hello");
	while (*ptr != '\0')
		write(1, ptr++, 1);
	return (0);
}*/
