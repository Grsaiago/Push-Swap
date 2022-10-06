/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_validate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:56:00 by gsaiago           #+#    #+#             */
/*   Updated: 2022/10/03 17:29:56 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	if_not_numb(int ac, char **av)
{
	int	x;
	int	y;

	x = 1;
	while (x < ac)
	{
		y = 0;
		while (av[x][y])
		{
			if (y == 0)
			{
				if (av[x][y] == '-' || av[x][y] == '+')
					y++;
			}
			if (!ft_isdigit(av[x][y]))
				exit_func(NULL);
			y++;
		}
		x++;
	}
	return (0);
}

int	not_int_range(int ac, char **av)
{
	int			x;
	long int	numb;

	x = 1;
	while (x < ac)
	{
		numb = ft_atol(av[x]);
		if ((numb > 2147483647) || (numb < -2147483648))
			exit_func(NULL);
		x++;
	}
	return (0);
}

int	no_duplicates(int ac, char **av)
{
	int		x;

	x = 1;
	while (x < ac)
	{
		compare_to_av(ac, x, av[x], av);
		x++;
	}
	return (0);
}

int	compare_to_av(int ac, int x, char *ref, char **av)
{
	char	*compare;

	if (ref[0] == '+')
		ref++;
	while (x < ac - 1)
	{
		compare = av[x + 1];
		if (compare[0] == '+')
			compare++;
		if (!ft_strncmp(ref, compare, 100))
			exit_func(NULL);
		x++;
	}
	return (0);
}

int	not_valid_args(int ac, char **av)
{
	if_not_numb(ac, av);
	not_int_range(ac, av);
	no_duplicates(ac, av);
	return (0);
}
