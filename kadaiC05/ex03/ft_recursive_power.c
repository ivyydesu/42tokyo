/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaoki <kaoki@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 18:42:01 by kaoki             #+#    #+#             */
/*   Updated: 2025/03/28 11:04:28 by kaoki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	return (nb * ft_recursive_power(nb, power - 1));
}
// #include <stdio.h>

// int	ft_recursive_power(int nb, int power);

// int	main(void)
// {
// 	printf("3^3 = %d\n", ft_recursive_power(3, 3));
// 	printf("10^-1 = %d\n", ft_recursive_power(10, -1));
// 	printf("0^4 = %d\n", ft_recursive_power(0, 4));
// 	printf("0^0 = %d\n", ft_recursive_power(0, 0));
// 	return (0);
// }
// 説明○(returnは親に帰る)
