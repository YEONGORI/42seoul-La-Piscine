/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 21:02:26 by yeongele          #+#    #+#             */
/*   Updated: 2022/04/26 19:26:11 by yeongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_string(char *addr, int size)
{
	int	cnt;

	cnt = 0;
	while (cnt < 16)
	{
		if (cnt > size)
			return ;
		else
		{
			if (*(addr + cnt) < 32 || *(addr + cnt) > 127)
				write(1, ".", 1);
			else
				write(1, addr + cnt, 1);
		}
		cnt++;
	}
}

void	print_hex(char *addr, int size)
{
	char	*hex;
	int		cnt;

	hex = "0123456789abcdef";
	cnt = 0;
	while (cnt < 16)
	{
		if (cnt > size)
			write(1, "  ", 2);
		else
		{
			write(1, &hex[(int)(*addr) / 16], 1);
			write(1, &hex[(int)(*addr) % 16], 1);
		}
		if (cnt % 2 == 1)
			write(1, " ", 1);
		addr++;
		cnt++;
	}
}

void	print_address(char *addr)
{
	char			addr_arr[16];
	unsigned long	addr_l;
	int				cnt;

	addr_l = (unsigned long)addr;
	cnt = 15;
	while (cnt >= 0)
	{
			addr_arr[cnt] = "0123456789abcdef"[addr_l % 16];
			addr_l = addr_l / 16;
			cnt--;
	}
	write(1, addr_arr, 16);
	write(1, ": ", 2);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int				line;

	line = 0;
	while (size / 16 > 0)
	{
		print_address(addr + line);
		print_hex(addr + line, size);
		print_string(addr + line, size);
		write(1, "\n", 1);
		size -= 16;
		line += 16;
	}
	print_address(addr + line);
	print_hex(addr + line, size);
	print_string(addr + line, size);
	write(1, "\n", 1);
	return (addr);
}
