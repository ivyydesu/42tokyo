/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaoki <kaoki@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 15:09:50 by kaoki             #+#    #+#             */
/*   Updated: 2025/03/23 09:58:08 by kaoki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char	*ret;

	ret = dest;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ret);
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
