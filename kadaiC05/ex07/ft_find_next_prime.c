/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaoki <kaoki@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 12:24:18 by kaoki             #+#    #+#             */
/*   Updated: 2025/03/28 12:01:03 by kaoki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (2);
	if (nb == 2)
		return (2);
	if (nb % 2 == 0)
		nb++;
	while (1)
	{
		i = 3;
		while (i <= nb / i)
		{
			if (nb % i == 0)
			{
				break ;
			}
			i += 2;
		}
		if (i > nb / i)
		{
			return (nb);
		}
		nb += 2;
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("Next prime of 1: %d\n", ft_find_next_prime(1));
// 	printf("Next prime of 3: %d\n", ft_find_next_prime(3));
// 	printf("Next prime of 4: %d\n", ft_find_next_prime(4));
// 	printf("Next prime of 75: %d\n", ft_find_next_prime(75));
// 	printf("Next prime of 9: %d\n", ft_find_next_prime(9));
// 	return (0);
// }
//アルゴリズムが難しいから必要であれば75使って解説
