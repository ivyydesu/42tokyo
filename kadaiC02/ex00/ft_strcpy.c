/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaoki <kaoki@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 15:09:50 by kaoki             #+#    #+#             */
/*   Updated: 2025/03/21 12:09:09 by kaoki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	source[] = "Hello,World!";
// 	char	destination[100];

// 	ft_strcpy(destination, source);
// 	printf("実行結果: %s\n", destination);
// 	return (0);
// }
