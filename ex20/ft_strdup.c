/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yandriie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/24 10:58:24 by yandriie          #+#    #+#             */
/*   Updated: 2017/10/24 19:41:56 by yandriie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		res;

	res = 0;
	if (str == 0)
		return (-1);
	while (str[res] != '\0')
		res++;
	return (res);
}

char	*ft_strdup(char *src)
{
	char	*n_str;
	int		n_size;
	int		i;

	n_size = ft_strlen(src) + 1;
	if (n_size == 0)
		return (0);
	n_str = (char *)malloc(n_size * sizeof(*src));
	if (n_str == 0)
		return (0);
	i = -1;
	while (++i < n_size - 1)
		n_str[i] = src[i];
	n_str[n_size - 1] = '\0';
	return (n_str);
}
