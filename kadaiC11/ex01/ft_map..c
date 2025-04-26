/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map..c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaoki <kaoki@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 05:19:28 by kaoki             #+#    #+#             */
/*   Updated: 2025/04/04 05:21:25 by kaoki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*result;
	int	i;

	if (!tab || length <= 0)
		return (NULL);
	result = (int *)malloc(sizeof(int) * length);
	if (!result)
		return (NULL);
	i = 0;
	while (i < length)
	{
		result[i] = f(tab[i]);
		i++;
	}
	return (result);
}

#include <stdio.h>
#include <stdlib.h>

int	increment(int n)
{
	return (n + 1);
}

int	main(void)
{
	int	tab[] = {1, 2, 3, 4, 5};
	int	length;
	int	*result;
	int	i;

	length = 5;
	result = ft_map(tab, length, increment);
	if (!result)
	{
		printf("Memory allocation failed\n");
		return (1);
	}
	i = 0;
	while (i < length)
	{
		printf("%d ", result[i]);
		i++;
	}
	printf("\n");
	free(result);
	return (0);
}
