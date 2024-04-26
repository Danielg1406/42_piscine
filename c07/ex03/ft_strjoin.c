/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-a <dgomez-a@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 15:05:10 by dgomez-a          #+#    #+#             */
/*   Updated: 2024/03/25 17:42:05 by dgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		++len;
	return (len);
}

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

int	ft_total_length(char **strs, int size)
{
	int	i;
	int	total_len;

	i = 0;
	total_len = 0;
	while (i < size)
	{
		total_len = total_len + ft_strlen(strs[i]);
		i++;
	}
	return (total_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		total_len;
	int		sep_len;

	str = 0;
	sep_len = ft_strlen(sep);
	if (size == 0)
		return (str);
	total_len = ft_total_length(strs, size);
	str = (char *)malloc(total_len + (size - 1) * sep_len + sizeof(char));
	if (str == NULL)
		return (NULL);
	str[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i < size - 1)
			ft_strcat(str, sep);
		i++;
	}
	return (str);
}

/*#include <stdio.h>
int	main(void)
{
	char	*sep = "-";
	char	*a[] = {"hola","como","estas?"};
	char	*res = ft_strjoin(3, a, sep);
	printf("%s\n", res);
	return (0);
}*/
