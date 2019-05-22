/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathomas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 15:43:41 by mathomas          #+#    #+#             */
/*   Updated: 2019/05/03 16:06:29 by mathomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	i = -1;
	if (s == NULL || len <= 0)
		return (ft_strdup(""));
	else if (len > (size_t)ft_strlen((char *)s))
		return (NULL);
	else
	{
		str = ft_strnew(len);
		if (str == NULL)
			return (0);
		while (++i < len)
			str[i] = s[start++];
		str[i] = '\0';
		return (str);
	}
}
