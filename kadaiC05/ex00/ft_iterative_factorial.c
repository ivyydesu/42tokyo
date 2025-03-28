/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaoki <kaoki@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 16:27:54 by kaoki             #+#    #+#             */
/*   Updated: 2025/03/28 10:44:12 by kaoki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
	{
		return (0);
	}
	result = 1;
	while (nb > 1)
	{
		result *= nb;
		nb--;
	}
	return (result);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	num;
// 	int	result;

// 	num = 5;
// 	result = ft_iterative_factorial(num);
// 	printf("%d", result);
// 	return (0);
// }
//説明○
