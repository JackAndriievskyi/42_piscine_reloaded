/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yandriie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/24 17:35:55 by yandriie          #+#    #+#             */
/*   Updated: 2017/10/25 12:28:18 by yandriie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}

void	ft_display_file(int fd)
{
	char	buf[128];
	int		ret;
	int		i;
	char	c;

	ret = -1;
	while (ret != 0)
	{
		ret = read(fd, buf, 128);
		i = -1;
		while (++i < ret)
			ft_putchar(buf[i]);
	}
	return ;
}

int		main(int ar, char **av)
{
	int		fd;

	if (ar == 1)
	{
		write(1, "File name missing.\n", 19);
		return (1);
	}
	if (ar > 2)
	{
		write(1, "Too many arguments.\n", 20);
		return (1);
	}
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
		return (1);
	ft_display_file(fd);
	if (close(fd) == -1)
		return (1);
	return (0);
}
