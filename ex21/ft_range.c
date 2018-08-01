/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yandriie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/24 11:37:36 by yandriie          #+#    #+#             */
/*   Updated: 2018/07/31 09:37:21 by yandriie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*res;
	int		i;

	if (min >= max)
		return (NULL);
	res = (int *)malloc((max - min) * sizeof(*res));
	if (res == NULL)
		return (NULL);
	i = -1;
	while (min + (++i) < max)
		res[i] = min + i;
	return (res);
}
