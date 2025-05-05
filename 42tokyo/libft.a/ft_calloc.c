/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokirou <aokirou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 17:18:12 by aokirou           #+#    #+#             */
/*   Updated: 2025/05/03 17:21:59 by aokirou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*p;

	p = (char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}

void *ft_calloc(size_t count, size_t size)
{
    void	*ptr;
	size_t	total;

	if (count != 0 && size > SIZE_MAX / count)
		return (NULL);

	total = count * size;
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
    ft_bzero(ptr, total);
	return (ptr);
}

#include <stdio.h>

int main(void)
{
	int *arr = (int *)ft_calloc(5, sizeof(int));

	if (!arr)
	{
		printf("メモリ確保失敗\n");
		return (1);
	}

	for (int i = 0; i < 5; i++)
		printf("arr[%d] = %d\n", i, arr[i]);

	free(arr);
	return (0);
}