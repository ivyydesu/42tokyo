/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaoki <kaoki@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 19:33:57 by kaoki             #+#    #+#             */
/*   Updated: 2025/03/23 10:38:00 by kaoki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		is_word_start;
	char	*p;

	is_word_start = 1;
	p = str;
	while (*p)
	{
		if ((*p >= 'a' && *p <= 'z'))
		{
			if (is_word_start)
				*p -= 32;
		}
		else if (*p >= 'A' && *p <= 'Z')
		{
			if (!is_word_start)
				*p += 32;
		}
		is_word_start = !((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z')
				|| (*p >= '0' && *p <= '9'));
		p++;
	}
	return (str);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char str[] = "salut, \comment tu vas \? 42mots quarante - deux; \cinqunte";
// 	ft_strcapitalize(str);
// 	printf("%s\n", str);
// 	return (0);
// }
