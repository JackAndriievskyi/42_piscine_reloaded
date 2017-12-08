/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yandriie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/24 11:37:36 by yandriie          #+#    #+#             */
/*   Updated: 2017/10/24 20:50:57 by yandriie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*res;
	int		i;

	if (min >= max)
		return (NULL);
	res = NULL;
	res = (int *)malloc((max - min + 1) * sizeof(*res));
	if (res == NULL)
		return (NULL);
	i = -1;
	while (min + (++i) < max)
		res[i] = min + i;
	return (res);
}
