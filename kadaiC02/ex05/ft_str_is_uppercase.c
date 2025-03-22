/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaoki <kaoki@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 11:48:56 by kaoki             #+#    #+#             */
/*   Updated: 2025/03/21 12:09:24 by kaoki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str)
	{
		if (!('A' <= *str && 'Z' >= *str))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char	m[] = "";
// 	int		index;

// 	index = ft_str_is_printable(m);
// 	printf("%d", index);
// 	return (0);
// }
