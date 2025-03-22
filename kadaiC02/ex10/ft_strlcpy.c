/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaoki <kaoki@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 10:33:05 by kaoki             #+#    #+#             */
/*   Updated: 2025/03/22 18:46:36 by kaoki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	if (size == 0)
		return (i);
	while (j < size - 1 && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (i);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	src[] = "Hello, world!";
// 	char	dst[20];
// 	size_t	len;

// 	len = ft_strlcpy(dst, src, sizeof(dst));
// 	printf("Copied: %s\n", dst);
// 	printf("Source length: %zu\n", len);
// 	return (0);
// }
