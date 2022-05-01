/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 14:18:08 by yeongele          #+#    #+#             */
/*   Updated: 2022/04/28 14:26:41 by yeongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	_ft_strlen(char *argv)
{
	int	i;

	i = 0;
	while (argv[i])
		i++;
	return (i);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = argc - 1;
	if (argc < 1)
		return (0);
	while (i != 0)
	{
		write(1, &argv[i][0], _ft_strlen(&argv[i][0]));
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
