/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathomas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 15:10:05 by mathomas          #+#    #+#             */
/*   Updated: 2019/05/21 20:22:04 by mathomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>

int	check_entry(char *file)
{
	int 	fd;
	int		test;
	char	**tetr;

	fd = open(file, O_RDONLY);
	test = get_next_line(fd, tetr);
	printf("%i", test);
	return (1);
}

int main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	check_entry(argv[1]);
	return (0);
}
