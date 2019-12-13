/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrizkiou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 12:51:51 by hrizkiou          #+#    #+#             */
/*   Updated: 2019/04/10 14:34:13 by hrizkiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void	aff_file(int fd)
{
	char c;

	while (read(fd, &c, 1) != 0)
		write(1, &c, 1);
}

int		main(int argc, char *argv[])
{
	int fd;

	if (argc != 2)
	{
		if (argc < 2)
			write(1, "File name missing.\n", 19);
		else if (argc > 2)
			write(1, "Too many arguments.\n", 20);
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		return (0);
	aff_file(fd);
	close(fd);
	return (0);
}
