/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yandriie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/24 17:35:55 by yandriie          #+#    #+#             */
/*   Updated: 2018/07/31 09:52:06 by yandriie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int		print_err_msg(char *msg)
{
	int		i;

	i = 0;
	while (msg[i])
		i++;
	write(1, msg, i);
	return (1);
}

void	ft_display_file(int fd)
{
	char	buf[128];
	int		ret;

	while ((ret = read(fd, buf, 128)) > 0)
		write(1, buf, ret);
}

int		main(int ar, char **av)
{
	int		fd;

	if (ar == 1)
		return (print_err_msg("File name missing.\n"));
	if (ar > 2)
		return (print_err_msg("Too many arguments.\n"));
	if ((fd = open(av[1], O_RDONLY)) < 0)
		return (print_err_msg("\topen failed..."));
	ft_display_file(fd);
	if (close(fd) == -1)
		return (print_err_msg("\tclose failed..."));
	return (0);
}
