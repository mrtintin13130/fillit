/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathomas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 17:31:10 by mathomas          #+#    #+#             */
/*   Updated: 2019/04/30 14:02:09 by mathomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	unsigned char s11;
	unsigned char s22;

	s11 = *s1;
	s22 = *s2;
	if (!s11 && !s22)
		return (0);
	else if (s11 != s22)
		return (s11 - s22);
	return (ft_strcmp(++s1, ++s2));
}
