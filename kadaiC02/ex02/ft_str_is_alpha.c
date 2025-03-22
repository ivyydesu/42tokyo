/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaoki <kaoki@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 18:11:00 by kaoki             #+#    #+#             */
/*   Updated: 2025/03/21 12:09:04 by kaoki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str)
	{
		if (!(('A' <= *str && 'Z' >= *str) || ('a' <= *str && 'z' >= *str)))
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
// 	char	m[] = "kota@Tro";
// 	int		index;

// 	index = ft_str_is_alpha(m);
// 	printf("%d", index);
// 	return (0);
// }
