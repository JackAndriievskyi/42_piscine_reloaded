/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yandriie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/23 17:38:08 by yandriie          #+#    #+#             */
/*   Updated: 2017/10/24 19:36:31 by yandriie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar();

int		ft_strlen(char *str)
{
	int		res;

	res = 0;
	while (str[res] != '\0')
		res++;
	return (res);
}

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] > s2[i])
			return (1);
		if (s2[i] > s1[i])
			return (-1);
		i++;
	}
	return (0);
}

void	ft_sort_params(char **str, int size)
{
	char	*tmp;
	int		i;
	int		j;

	i = -1;
	while (++i < size)
	{
		j = -1;
		while (++j < size)
			if (ft_strcmp(str[i], str[j]) < 0)
			{
				tmp = str[j];
				str[j] = str[i];
				str[i] = tmp;
			}
	}
	return ;
}

int		main(int ar, char **av)
{
	int		i;
	int		j;
	char	c;

	if (ar <= 1)
		return (1);
	ft_sort_params(av, ar);
	i = 0;
	while (++i < ar)
	{
		j = -1;
		while ((c = av[i][++j]) != '\0')
			ft_putchar(c);
		ft_putchar('\n');
	}
	return (0);
}
