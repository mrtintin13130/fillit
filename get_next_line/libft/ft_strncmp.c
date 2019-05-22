/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathomas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 14:07:08 by mathomas          #+#    #+#             */
/*   Updated: 2019/04/30 16:59:57 by mathomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned char s11;
	unsigned char s22;

	s11 = *s1;
	s22 = *s2;
	if (!n || (!s11 && !s22))
		return (0);
	else if (s11 != s22)
		return (s11 - s22);
	return (ft_strncmp(++s1, ++s2, --n));
}
