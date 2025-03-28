/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaoki <kaoki@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 18:32:57 by kaoki             #+#    #+#             */
/*   Updated: 2025/03/28 10:53:56 by kaoki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	result = 1;
	while (power > 0)
	{
		result = result * nb;
		power--;
	}
	return (result);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	num;
// 	int	power;
// 	int	result;

// 	num = 6;
// 	power = 4;
// 	result = ft_iterative_power(num, power);
// 	printf("%d", result);
// 	return (0);
// }
//説明○
