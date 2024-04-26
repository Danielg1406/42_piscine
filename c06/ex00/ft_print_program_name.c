/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-a <dgomez-a@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:33:31 by dgomez-a          #+#    #+#             */
/*   Updated: 2024/03/21 15:38:31 by dgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc != 1)
		return (1);
	while (*argv[0] != '\0')
		write(1, argv[0]++, 1);
	write(1, "\n", 1);
	return (0);
}
