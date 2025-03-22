/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaoki <kaoki@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 12:53:58 by kaoki             #+#    #+#             */
/*   Updated: 2025/03/21 12:09:41 by kaoki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	char	*orig;

	orig = str;
	while (*str)
	{
		if ('a' <= *str && 'z' >= *str)
		{
			*str -= 32;
		}
		str++;
	}
	return (orig);
}

// int	main(void)
// {
// 	char	m[] = "HJrtyrTYAd";
// 	char	*index;

// 	index = ft_strupcase(m);
// 	printf("%s", index);
// 	return (0);
// }
