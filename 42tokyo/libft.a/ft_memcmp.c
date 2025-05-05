/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokirou <aokirou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 17:28:59 by aokirou           #+#    #+#             */
/*   Updated: 2025/05/03 17:29:42 by aokirou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	size_t				i;

	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	i = 0;

	while (i < n)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}

#include <stdio.h>

int main(void)
{
	char a[] = "42Tokyo";
	char b[] = "42Togyo";

	int result = ft_memcmp(a, b, 7);

	if (result == 0)
		printf("一致\n");
	else if (result < 0)
		printf("a < b\n");
	else
		printf("a > b\n");

	return 0;
}