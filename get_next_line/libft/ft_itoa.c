/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathomas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 16:47:18 by mathomas          #+#    #+#             */
/*   Updated: 2019/05/06 19:44:07 by mathomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int c)
{
	int	i;
	int	len;

	i = 1;
	if (c < 0)
		i++;
	len = c;
	while (len >= 10 || len <= -10)
	{
		len = len / 10;
		i++;
	}
	return (i);
}

static char	*ft_strrev_int(char *str)
{
	int		a;
	int		b;
	char	y;

	a = ft_strlen(str) - 1;
	b = 0;
	while (a > b)
	{
		if (str[b] != '-')
		{
			y = str[b];
			str[b] = str[a];
			str[a] = y;
			a--;
			b++;
		}
		else
			b++;
	}
	return (str);
}

char		*ft_itoa(int n)
{
	int		i;
	char	*res;

	i = 0;
	if (!(res = malloc((sizeof(char) * ft_intlen(n)) + 1)))
		return (NULL);
	if (n == 2147483647)
		return (ft_strdup("2147483647"));
	else if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	else if (n == 0 || n == -0)
		return (ft_strdup("0"));
	if (n < 0)
	{
		res[0] = '-';
		n = -n;
		i++;
	}
	while (n != 0)
	{
		res[i++] = (n % 10) + 48;
		n = n / 10;
	}
	res[i] = '\0';
	return (ft_strdup(ft_strrev_int(res)));
}
