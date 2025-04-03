/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaoki <kaoki@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 18:17:50 by kyanagis          #+#    #+#             */
/*   Updated: 2025/04/03 23:47:20 by kaoki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*dup;

	i = 0;
	while (src[i])
		i++;
	dup = (char *)malloc(sizeof(char) * (i + 1));
	if (!dup)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

t_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*array;
	int			i;

	array = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!array)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		array[i].size = 0;
		while (av[i][array[i].size])
			array[i].size++;
		array[i].str = av[i];
		array[i].copy = ft_strdup(av[i]);
		if (!array[i].copy)
		{
			while (i-- > 0)
				free(array[i].copy);
			free(array);
			return (NULL);
		}
		i++;
	}
	array[ac].str = NULL;
	return (array);
}

// void	free_stock_str(t_stock_str *array)
// {
// 	int	i;

// 	if (!array)
// 		return ;
// 	i = 0;
// 	while (array[i].str)
// 	{
// 		free(array[i].copy);
// 		i++;
// 	}
// 	free(array);
// }

// #include <unistd.h>

// int	main(void)
// {
// 	char *strings[] = {"yobroooooo", "42Tokyo", "suis", "pasuta",
// 		"ramenmenmen"};
// 	int ac = sizeof(strings) / sizeof(strings[0]);

// 	t_stock_str *array = ft_strs_to_tab(ac, strings);
// 	if (!array)
// 	{
// 		write(2, "Error: Memory allocation failed\n", 31);
// 		return (1);
// 	}

// 	ft_show_tab(array);

// 	/* 動的確保したコピー文字列および配列本体を開放 */
// 	free_stock_str(array);

// 	return (0);
// }
