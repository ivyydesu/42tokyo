/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokirou <aokirou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 17:26:11 by aokirou           #+#    #+#             */
/*   Updated: 2025/05/07 18:07:01 by aokirou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	size_t				i;

	ptr = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)(ptr + i));
		i++;
	}
	return (NULL);
}

int	main(void)
{
	char data[] = "42Tokyo!";
	char *res = ft_memchr(data, 'T', 8);

	if (res)
		printf("見つかった: %s\n", res); // → Tokyo!
	else
		printf("見つからなかった\n");

	return 0;
}