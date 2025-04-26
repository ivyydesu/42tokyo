/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaoki <kaoki@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 04:13:58 by kaoki          #+#    #+#             */
/*   Updated: 2025/04/04 04:58:17 by kaoki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && is_sep(str[i], charset))
			i++;
		if (str[i])
			count++;
		while (str[i] && !is_sep(str[i], charset))
			i++;
	}
	return (count);
}

char	*malloc_word(char *str, char *charset)
{
	int		len;
	char	*word;
	int		i;

	len = 0;
	while (str[len] && !is_sep(str[len], charset))
		len++;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (0);
	i = 0;
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**split;
	int		i;

	split = (char **)malloc(sizeof(char *) * (count_words(str, charset) + 1));
	if (!split)
		return (0);
	i = 0;
	while (*str)
	{
		while (*str && is_sep(*str, charset))
			str++;
		if (*str)
		{
			split[i] = malloc_word(str, charset);
			if (!split[i])
				return (0);
			i++;
		}
		while (*str && !is_sep(*str, charset))
			str++;
	}
	split[i] = 0;
	return (split);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*str;
// 	char	*charset;
// 	char	**result;
// 	int		i;

// 	str = "ohayou,mazide,kaeritai";
// 	charset = ",";
// 	result = ft_split(str, charset);
// 	i = 0;
// 	while (result[i])
// 	{
// 		printf("result[%d] = %s\n", i, result[i]);
// 		free(result[i]);
// 		i++;
// 	}
// 	free(result);
// 	return (0);
// }
