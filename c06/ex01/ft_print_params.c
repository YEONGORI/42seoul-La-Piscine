/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 14:04:40 by yeongele          #+#    #+#             */
/*   Updated: 2022/04/28 14:17:24 by yeongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen_(char *argv)
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

	i = 1;
	if (argc < 1)
		return (0);
	while (i < argc)
	{
		write(1, &argv[i][0], ft_strlen_(&argv[i][0]));
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
