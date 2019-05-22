/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathomas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/05 15:27:23 by mathomas          #+#    #+#             */
/*   Updated: 2019/05/05 16:49:30 by mathomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcount(const char *s, char c)
{
	int		count;
	int		tmp;
	size_t	i;

	tmp = 0;
	count = 0;
	i = 0;
	while (s[i])
	{
		if (tmp == 1 && s[i] == c)
			tmp = 0;
		if (tmp == 0 && s[i] != c)
		{
			tmp = 1;
			count++;
		}
		i++;
	}
	return (count);
}

static void	ft_fill_tab(int w_count, char **tab, const char *s, char c)
{
	int i;
	int j;
	int start;

	i = 0;
	j = -1;
	while (++j < w_count)
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		tab[j] = malloc((sizeof(char *)) * ((i - start) + 1));
		tab[j] = ft_strsub((char *)s, start, i - start);
		i++;
	}
	tab[j] = NULL;
}

char		**ft_strsplit(char const *s, char c)
{
	int		w_count;
	char	**tab;

	if ((s == 0) || (c == 0))
		return (NULL);
	w_count = ft_wordcount((char *)s, c);
	tab = malloc((sizeof(char *) * (w_count + 1)));
	if (tab == NULL)
		return (NULL);
	ft_fill_tab(w_count, tab, s, c);
	return (tab);
}
