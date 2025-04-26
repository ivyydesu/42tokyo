/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaoki <kaoki@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 05:22:43 by kaoki             #+#    #+#             */
/*   Updated: 2025/04/04 05:25:05 by kaoki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_any(char **tab, int (*f)(char *))
{
	while (tab && *tab)
	{
		if (f(*tab))
			return (1);
		tab++;
	}
	return (0);
}
#include <stdio.h>

int	is_longer_than_3(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i > 3);
}

int	main(void)
{
	char	*tab[] = {"Hi", "Hlo", "42", "Wod", NULL};

	if (ft_any(tab, is_longer_than_3))
		printf("At least one string has more than 3 characters\n");
	else
		printf("No string has more than 3 characters\n");
	return (0);
}
