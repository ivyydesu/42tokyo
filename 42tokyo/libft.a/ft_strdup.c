/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokirou <aokirou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 17:23:11 by aokirou           #+#    #+#             */
/*   Updated: 2025/05/03 17:23:39 by aokirou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *s1)
{
	char	*copy;
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	copy = (char *)malloc(sizeof(char) * (len + 1));
	if (!copy)
		return (NULL);

	i = 0;
	while (s1[i])
	{
		copy[i] = s1[i];
		i++;
	}
	copy[i] = '\0';

	return (copy);
}

#include <stdio.h>

int main(void)
{
	const char *original = "42Tokyo!";
	char *clone = ft_strdup(original);

	if (clone)
	{
		printf("コピー: %s\n", clone);
		free(clone);
	}
	else
	{
		printf("メモリ確保失敗\n");
	}
	return 0;
}