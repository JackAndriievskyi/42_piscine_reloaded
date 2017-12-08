/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yandriie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/23 16:37:26 by yandriie          #+#    #+#             */
/*   Updated: 2017/10/24 21:03:18 by yandriie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		res;

	if (nb < 0 || nb > 20)
		return (0);
	if (nb == 0)
		return (1);
	res = nb;
	while (--nb >= 1)
		res *= nb;
	return (res);
}
