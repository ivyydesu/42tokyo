/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaoki <kaoki@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 12:17:12 by kaoki             #+#    #+#             */
/*   Updated: 2025/03/25 15:24:18 by kaoki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}

// #include <stdio.h>
//  int	main(void)
//  {
// 	int		count;
// 	char	m[] = "HELLO,WORLD!!";

// 	count = 0;
// 	count = ft_strlen(m);
// 	printf("%d", count);
// 	return (0);
// }
