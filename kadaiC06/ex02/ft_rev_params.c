/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaoki <kaoki@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 17:31:41 by kaoki             #+#    #+#             */
/*   Updated: 2025/03/28 12:38:47 by kaoki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	size;

	size = argc - 1;
	i = 0;
	while (size >= 1)
	{
		i = 0;
		while (argv[size][i] != '\0')
		{
			write(1, &argv[size][i], 1);
			i++;
		}
		write(1, "\n", 1);
		size--;
	}
	return (0);
}
