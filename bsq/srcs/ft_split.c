/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ji-song <ji-song@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 12:34:31 by ji-song           #+#    #+#             */
/*   Updated: 2022/04/30 12:52:06 by ji-song          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/ft_string.h"

int	is_seperator(char c, char *charset)
{
	int	cursor;

	cursor = 0;
	while (charset[cursor])
	{
		if (charset[cursor] == c)
			return (1);
		cursor++;
	}
	return (0);
}

int	get_word_count(char *str, char *charset)
{
	int	count;
	int	index;
	int	is_word;

	count = 0;
	index = 0;
	is_word = 0;
	while (str[index])
	{
		if (!is_seperator(str[index], charset) && !is_word)
			is_word = 1;
		else if (is_seperator(str[index], charset) && is_word)
		{
			count++;
			is_word = 0;
		}
		index++;
	}
	count += is_word;
	return (count);
}

char	*get_word(char *str, char *charset, int *start)
{
	int		cursor;
	char	*word;
	int		idx_word;

	cursor = *start;
	while (str[cursor])
	{
		if (is_seperator(str[cursor], charset))
			break ;
		cursor++;
	}
	word = (char *)malloc((cursor - *start + 1) * sizeof(char));
	if (word == NULL)
		return (NULL);
	idx_word = 0;
	while (idx_word < (cursor - *start))
	{
		word[idx_word] = str[*start + idx_word];
		idx_word++;
	}
	word[idx_word] = '\0';
	*start = cursor;
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		word_count;
	char	**result;
	int		idx_result;
	int		idx_str;

	word_count = get_word_count(str, charset);
	result = (char **)malloc((word_count + 1) * sizeof(char *));
	idx_result = 0;
	idx_str = 0;
	if (result == NULL)
		return (NULL);
	while (str[idx_str])
	{
		if (!is_seperator(str[idx_str], charset))
		{
			result[idx_result] = get_word(str, charset, &idx_str);
			if (result[idx_result++] == NULL)
				break ;
		}
		if (str[idx_str])
			idx_str++;
	}
	result[idx_result] = NULL;
	return (result);
}
