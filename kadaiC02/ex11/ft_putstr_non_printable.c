/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaoki <kaoki@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 19:26:32 by kaoki             #+#    #+#             */
/*   Updated: 2025/04/01 08:59:01 by kaoki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char	*hex;

	hex = "0123456789abcdef";
	while (*str)
	{
		if (*str >= 32 && *str <= 126)
		{
			write(1, str, 1);
		}
		else
		{
			write(1, "\\", 1);
			write(1, &hex[*str / 16], 1);
			write(1, &hex[*str % 16], 1);
		}
		str++;
	}
}

int	main(void)
{
	char	str[] = "Coucou\ttu vas bien ?";

	ft_putstr_non_printable(str);
	return (0);
}
