/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaoki <kaoki@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 10:51:50 by kaoki             #+#    #+#             */
/*   Updated: 2025/03/21 12:09:16 by kaoki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str)
	{
		if (!('a' < *str && 'z' > *str))
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
// 	char	m[] = "iooYoo";
// 	int		index;

// 	index = ft_str_is_lowercase(m);
// 	printf("%d", index);
// 	return (0);
// }
