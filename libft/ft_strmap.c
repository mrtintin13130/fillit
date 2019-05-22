/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathomas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 17:15:06 by mathomas          #+#    #+#             */
/*   Updated: 2019/05/06 16:40:08 by mathomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*str;

	if (s && f)
	{
		str = ft_strdup((char *)s);
		if (str == NULL)
			return (0);
		i = -1;
		while (s[++i])
			str[i] = (*f)(s[i]);
		return (str);
	}
	else
		return (NULL);
}
