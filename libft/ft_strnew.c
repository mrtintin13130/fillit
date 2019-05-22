/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathomas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 16:41:08 by mathomas          #+#    #+#             */
/*   Updated: 2019/05/12 12:27:55 by mathomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*mem;
	size_t	i;

	i = -1;
	mem = malloc((sizeof(char) * size) + 1);
	if (mem == NULL)
		return (NULL);
	while (++i < size)
		mem[i] = '\0';
	mem[i] = '\0';
	return (mem);
}
