/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 13:23:37 by yeongele          #+#    #+#             */
/*   Updated: 2022/04/30 14:10:31 by yeongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *argv)
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

	i = 0;
	if (argc != 1)
		return (0);
	write(1, *argv, ft_strlen(*argv));
	write(1, "\n", 1);
	return (0);
}
