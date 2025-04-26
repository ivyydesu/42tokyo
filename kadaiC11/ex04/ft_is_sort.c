/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaoki <kaoki@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 05:31:39 by kaoki             #+#    #+#             */
/*   Updated: 2025/04/04 05:34:56 by kaoki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	check_order(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	ascending;
	int	cmp_result;

	ascending = 0;
	i = 0;
	while (i < length - 1)
	{
		cmp_result = f(tab[i], tab[i + 1]);
		if (cmp_result < 0)
			ascending = ascending == 0 ? 1 : ascending;
		else if (cmp_result > 0)
			ascending = ascending == 0 ? -1 : ascending;
		if ((ascending == 1 && cmp_result > 0) || (ascending == -1
				&& cmp_result < 0))
			return (0);
		i++;
	}
	return (1);
}

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	if (length <= 1)
		return (1);
	return (check_order(tab, length, f));
}
#include <stdio.h>

int	compare(int a, int b)
{
	return (a - b);
}

// int	main(void)
// {
// 	int	tab[] = {1, 2, 3, 4, 5};
// 	int	length;

// 	length = 5;
// 	if (ft_is_sort(tab, length, compare))
// 		printf("The array is sorted.\n");
// 	else
// 		printf("The array is not sorted.\n");
// 	return (0);
// }
