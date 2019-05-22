/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathomas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 13:11:05 by mathomas          #+#    #+#             */
/*   Updated: 2019/05/03 15:23:45 by mathomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s1, int c)
{
	int	i;

	i = 0;
	while (s1[i])
		i++;
	i++;
	while (--i >= 0)
		if (s1[i] == c)
			return ((char *)&(s1[i]));
	if (s1[i] == c)
		return ((char *)&(s1[i]));
	return (NULL);
}
