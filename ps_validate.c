#include "push_swap.h"

int	not_valid_args(int ac, char **av)
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
				if ((av[x][y] == '-' || av[x][y] == '+') && ft_strlen(av[x]) < 2)
					return (1);
			}
			else
				if (!ft_isdigit(av[x][y]))
					return (1);
			y++;
		}
		x++;
	}
	return (0);
}
