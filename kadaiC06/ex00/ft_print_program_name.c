/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaoki <kaoki@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 10:18:10 by kaoki             #+#    #+#             */
/*   Updated: 2025/03/28 10:28:17 by kaoki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < argc)
	{
		write(1, &argv[i][j], sizeof(argv[i]) - 1);
		i++;
		j++;
	}
	write(1, "\n", 1);
	return (0);
}
