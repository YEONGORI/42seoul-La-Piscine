/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 22:19:07 by yeongele          #+#    #+#             */
/*   Updated: 2022/05/01 23:14:06 by yeongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	write(1, "Hello Cadet ", 12);
	write(1, argv[1], ft_strlen(argv[1]));
	write(1, " Welcome to La Piscine!", 22);
	write(1, "\n", 1);
}
