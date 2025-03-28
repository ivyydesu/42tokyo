/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaoki <kaoki@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 11:29:02 by kaoki             #+#    #+#             */
/*   Updated: 2025/03/28 11:43:36 by kaoki            ###   ########.fr       */
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
	count = 0;
	i = 2;
	while (i <= nb)
	{
		if (nb % i == 0)
		{
			count++;
		}
		i++;
	}
	if (count == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	num1;
// 	int	num2;

// 	num1 = 57;
// 	num2 = 47;
// 	ft_is_prime(num2);
// 	printf("57:%d\n", ft_is_prime(num1));
// 	printf("47:%d\n", ft_is_prime(num2));
// 	return (0);
// }
