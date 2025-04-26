/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaoki <kaoki@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 16:41:22 by kaoki             #+#    #+#             */
/*   Updated: 2025/03/30 16:51:04 by kaoki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	return (nb * ft_recursive_factorial(nb - 1));
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	num;
// 	int	result;

// 	num = 5;
// 	result = ft_recursive_factorial(num);
// 	printf("%d", result);
// 	return (0);
// }
//説明○
