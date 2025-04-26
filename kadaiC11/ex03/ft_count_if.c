/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaoki <kaoki@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 05:26:38 by kaoki             #+#    #+#             */
/*   Updated: 2025/04/04 05:27:25 by kaoki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_count_if(char **tab, int length, int (*f)(char *))
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (i < length && tab[i] != NULL)
	{
		if (f(tab[i]) != 0)
			count++;
		i++;
	}
	return (count);
}

#include <stdio.h>

int	is_non_empty_string(char *str)
{
	return (str[0] != '\0');
}

int	main(void)
{
	char	*tab[] = {"Hello", "", "42", "World", NULL};
	int		length;
	int		count;

	length = 4;
	count = ft_count_if(tab, length, is_non_empty_string);
	printf("Count of non-empty strings: %d\n", count);
	return (0);
}
