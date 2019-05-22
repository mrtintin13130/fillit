/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathomas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/05 15:15:45 by mathomas          #+#    #+#             */
/*   Updated: 2019/05/05 16:50:12 by mathomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_display_fd(int nb, int fd)
{
	int a[10];
	int y;

	y = -1;
	while (nb != 0)
	{
		y++;
		a[y] = (nb % 10) + 48;
		nb = nb / 10;
	}
	while (y >= 0)
	{
		ft_putchar_fd(a[y], fd);
		y--;
	}
}

void		ft_putnbr_fd(int n, int fd)
{
	if (n <= 2147483647 && n > -2147483648)
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			ft_display_fd(n *= -1, fd);
		}
		else if (n == 0)
			ft_putchar_fd('0', fd);
		else
			ft_display_fd(n, fd);
	}
	else if (n == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_display_fd(214748364, fd);
		ft_putchar_fd('8', fd);
	}
}
