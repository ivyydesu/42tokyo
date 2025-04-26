/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaoki <kaoki@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 03:57:44 by kaoki             #+#    #+#             */
/*   Updated: 2025/04/26 10:49:38 by kaoki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	if (tab == NULL || f == NULL)
		return ;
	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

#include <unistd.h>

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr(n / 10);
	write(1, &((char[]){'0' + n % 10}), 1);
}

int	main(void)
{
	int	tab[] = {1, 2, 3, 4, 5};

	ft_foreach(tab, 5, &ft_putnbr);
	return (0);
}
