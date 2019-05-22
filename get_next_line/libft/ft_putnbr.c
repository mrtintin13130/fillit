/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathomas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 10:39:17 by mathomas          #+#    #+#             */
/*   Updated: 2019/05/05 16:49:52 by mathomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_display(int nb)
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
		ft_putchar(a[y]);
		y--;
	}
}

void		ft_putnbr(int nb)
{
	if (nb <= 2147483647 && nb > -2147483648)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			ft_display(nb *= -1);
		}
		else if (nb == 0)
			ft_putchar('0');
		else
			ft_display(nb);
	}
	else if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_display(214748364);
		ft_putchar('8');
	}
}
