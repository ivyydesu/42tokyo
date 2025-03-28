/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaoki <kaoki@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 19:59:36 by kaoki             #+#    #+#             */
/*   Updated: 2025/03/28 11:10:00 by kaoki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	if (index == 0)
	{
		return (0);
	}
	if (index == 1)
	{
		return (1);
	}
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
// #include <stdio.h>

// int	main(void)
// {
// 	int	a;
// 	int	b;

// 	a = 0;
// 	b = 0;
// 	a = ft_fibonacci(10);
// 	b = ft_fibonacci(15);
// 	printf("%d\n", a);
// 	printf("%d\n", b);
// 	return (0);
// }
//説明○
