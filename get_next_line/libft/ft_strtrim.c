/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathomas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 16:41:24 by mathomas          #+#    #+#             */
/*   Updated: 2019/05/05 15:23:19 by mathomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	char	*str;

	if (!s)
		return (NULL);
	str = ft_strdup((char *)s);
	if (str == NULL)
		return (0);
	while (*str == ' ' || *str == '\n' || *str == '\t')
		str++;
	i = ft_strlen(str) - 1;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		i--;
	str[++i] = '\0';
	return (ft_strdup(str));
}
