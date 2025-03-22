/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaoki <kaoki@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 14:43:25 by kaoki             #+#    #+#             */
/*   Updated: 2025/03/21 12:09:54 by kaoki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*orig;

	orig = str;
	while (*str)
	{
		if ('A' <= *str && 'Z' >= *str)
		{
			*str += 32;
		}
		str++;
	}
	return (orig);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	m[] = "KOTARO";
// 	char	*index;

// 	index = ft_strlowcase(m);
// 	printf("%s\n", index);
// 	return (0);
// }
