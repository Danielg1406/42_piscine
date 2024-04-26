/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-a <dgomez-a@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 11:01:52 by dgomez-a          #+#    #+#             */
/*   Updated: 2024/03/21 10:11:00 by dgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*str_ptr;
	char	*find_ptr;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		str_ptr = str;
		find_ptr = to_find;
		while (*find_ptr != '\0' && *str_ptr == *find_ptr)
		{
			str_ptr++;
			find_ptr++;
		}
		if (*find_ptr == '\0')
			return (str);
		str++;
	}
	return (0);
}

/*int	main(void)
{
	char	a[] = "abracadabra!";
	char	b[] = "cadabra!";
	char	*ptr;

	ptr = ft_strstr(a, b);
	while (*ptr != '\0')
		write(1, ptr++, 1);
	return (0);
}*/
