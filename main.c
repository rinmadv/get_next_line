/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marine <marine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 03:04:20 by marine            #+#    #+#             */
/*   Updated: 2023/01/23 03:10:05 by marine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(int argc, char **argv)
{
	int		fd;
	char	*line;
	int		nb;

	nb = 0;
	(void)argc;
	if (argc != 2)
		return (1);
	fd = open(argv[1], O_RDONLY);
	line = get_next_line(fd);
	while (line)
	{
		printf("[%d] : %s", nb, line);
		free(line);
		line = get_next_line(fd);
		nb++;
	}
	printf("[%d] : %s", nb, line);
	close(fd);
}
