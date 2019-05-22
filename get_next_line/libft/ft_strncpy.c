/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathomas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 13:10:43 by mathomas          #+#    #+#             */
/*   Updated: 2019/05/05 15:29:25 by mathomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = -1;
	while (src[++i] != '\0' && i < len)
		dst[i] = src[i];
	if (i < len)
		while (i < len)
			dst[i++] = '\0';
	return (dst);
}
