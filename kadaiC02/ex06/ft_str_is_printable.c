/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaoki <kaoki@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 12:28:54 by kaoki             #+#    #+#             */
/*   Updated: 2025/04/01 08:55:58 by kaoki            ###   ########.fr       */
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
		if (!(' ' <= *str && '~' >= *str))
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
// 	char	m[] = "ffwd";
// 	int		index;

// 	index = ft_str_is_printable(m);
// 	printf("%d", index);
// 	return (0);
// }
