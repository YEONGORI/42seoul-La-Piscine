/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 08:41:10 by yeongele          #+#    #+#             */
/*   Updated: 2022/05/05 08:42:35 by yeongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int	add(int a, int b)
{
	int	ret;

	ret = a + b;
	return (ret);
}

int	sub(int a, int b)
{
	int	ret;

	ret = a - b;
	return (ret);
}

int	div(int a, int b)
{
	int	ret;

	ret = a / b;
	return (ret);
}

int	rem(int a, int b)
{
	int	ret;

	ret = a % b;
	return (ret);
}

int	mul(int a, int b)
{
	int	ret;

	ret = a * b;
	return (ret);
}
