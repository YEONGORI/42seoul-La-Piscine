/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 14:52:33 by yeongele          #+#    #+#             */
/*   Updated: 2022/04/30 21:02:26 by yeongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_len(char *argv)
{
	int	i;

	i = 0;
	while (argv[i])
		i++;
	return (i);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	sort(int cnt, char **str)
{
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	while (i < cnt - 1)
	{
		j = 1;
		while (j < cnt - i)
		{
			if (ft_strcmp(str[j], str[j + 1]) > 0)
			{
				tmp = str[j + 1];
				str[j + 1] = str[j];
				str[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	sort(argc - 1, argv);
	while (i < argc)
	{
		write(1, &argv[i][0], ft_str_len(&argv[i][0]));
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
