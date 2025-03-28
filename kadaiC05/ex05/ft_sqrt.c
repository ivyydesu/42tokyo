/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaoki <kaoki@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 20:19:15 by kaoki             #+#    #+#             */
/*   Updated: 2025/03/28 11:33:34 by kaoki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (nb);
	i = 1;
	while (i <= nb / i)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

// #include <stdio.h>

// int	ft_sqrt(int nb);

// int	main(void)
// {
// 	int	a;
// 	int	b;
// 	int	c;

// 	a = 123454321;
// 	b = 47;
// 	c = 256;
// 	printf("a: %d, b: %d, c: %d\n", ft_sqrt(a), ft_sqrt(b), ft_sqrt(c));
// 	return (0);
// }
//説明○、０の平方根ある,２２行目は式変形するとわかる(a!=0 && a > 0)
