/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaoki <kaoki@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 14:16:23 by kaoki             #+#    #+#             */
/*   Updated: 2025/03/25 15:24:39 by kaoki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (sign * result);
}
// #include <stdio.h>
// int	ft_atoi(char *str);

// int	main(void)
// {
// 	printf("%d\n", ft_atoi("   ---+--+1234ab567"));
// 	printf("%d\n", ft_atoi("   +42"));
// 	printf("%d\n", ft_atoi("   -0"));
// 	printf("%d\n", ft_atoi("  \t\n\r\f\v-123"));
// 	return (0);
// }
