/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 15:09:51 by yeongele          #+#    #+#             */
/*   Updated: 2022/05/05 10:31:59 by yeongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/map.h"
#include "../includes/builder.h"
#include "../includes/reader.h"
#include "../includes/printer.h"
#include "../includes/checker.h"

void	*excute(char *data, t_map **ori);

void	standard_main(char **data, t_map **ori)
{
	read_standard();
	read_map("default", data);
	if (excute(*data, ori) == NULL)
		write(1, "map error\n", 10);
	free(*data);
}

void	file_main(char *av, char **data, t_map **ori)
{
	read_map(av, data);
	if (excute(*data, ori) == NULL)
		write(1, "map error\n", 10);
	free(*data);
	write(1, "\n", 1);
}

void	*excute(char *data, t_map **ori)
{
	*ori = build_map(data);
	if (*ori == NULL)
		return (NULL);
	print_result(*ori);
	free_map(*ori);
	*ori = NULL;
	return (ori);
}

int	main(int argc, char *argv[])
{
	char	*data;
	t_map	*ori;
	int		i;

	i = 1;
	if (argc == 1)
		standard_main(&data, &ori);
	else
	{
		while (i < argc)
			file_main(argv[i++], &data, &ori);
	}
	return (0);
}
