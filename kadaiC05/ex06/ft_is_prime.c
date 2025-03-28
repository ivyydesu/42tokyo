/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaoki <kaoki@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 11:29:02 by kaoki             #+#    #+#             */
/*   Updated: 2025/03/28 14:37:20 by kaoki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	count;

	if (nb <= 1)
	{
		return (0);
	}
	i = 2;
	count = 0;
	while (i <= nb / i)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	num1;
// 	int	num2;

// 	num1 = 2147483647;
// 	num2 = 49;
// 	ft_is_prime(num2);
// 	printf("2147483647:%d\n", ft_is_prime(num1));
// 	printf("49:%d\n", ft_is_prime(num2));
// 	return (0);
// }
