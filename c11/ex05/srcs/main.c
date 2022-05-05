/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 08:44:03 by yeongele          #+#    #+#             */
/*   Updated: 2022/05/05 09:52:30 by yeongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void	start(int num1, int id, int num2)
{
	int	(*fp[5])(int, int);

	fp[0] = add;
	fp[1] = sub;
	fp[2] = div;
	fp[3] = rem;
	fp[4] = mul;
	if (id == 2 && num2 == 0)
	{
		write(1, "Stop : division by zero\n", 25);
		return ;
	}
	if (id == 3 && num2 == 0)
	{
		write(1, "Stop : modulo by zero\n", 23);
		return ;
	}
	if (id == -1)
	{
		write(1, "0\n", 2);
		return ;
	}
	ft_print(fp[id](num1, num2));
}

int	get_num(char *str)
{
	int	i;
	int	neg;
	int	ret;

	i = 0;
	neg = 1;
	ret = 0;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	if (str[i] >= '0' && str[i] <= '9')
	{
		while (str[i] && (str[i] >= '0' && str[i] <= '9'))
		{
			ret = (ret * 10) + (str[i] - '0');
			i++;
		}
	}
	else
		return (0);
	return (ret * neg);
}

int	test(char *str)
{
	if (str[1] != 0)
	{
		write(1, "0\n", 2);
		return (-1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	num1;
	int	num2;
	int	id;

	if (argc != 4)
		return (0);
	if (test(argv[2]) < 0)
		return (0);
	num1 = get_num(argv[1]);
	num2 = get_num(argv[3]);
	if (argv[2][0] == '+')
		id = 0;
	else if (argv[2][0] == '-')
		id = 1;
	else if (argv[2][0] == '/')
		id = 2;
	else if (argv[2][0] == '%')
		id = 3;
	else if (argv[2][0] == '*')
		id = 4;
	else
		id = -1;
	start(num1, id, num2);
	return (0);
}
