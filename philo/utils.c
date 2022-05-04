/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iannmari <iannmari@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 11:14:06 by iannmari          #+#    #+#             */
/*   Updated: 2022/05/04 19:50:57 by iannmari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	check_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] > '9' || str[i] < '0') && str[i] != '+' && str[i] != '-')
			return (-1);
		i++;
	}
	return (1);
}

int	check_arg(int argc, char **argv)
{
	if (argc > 6 || argc < 5)
	{
		printf("Invalid number of arguments\n");
		return (-1);
	}
	argc -= 1;
	while (argc > 0)
	{
		if (check_numeric(argv[argc]) == -1)
		{
			printf("Invalid arguments\n");
			return (-1);
		}
		argc -= 1;
	}
	return (1);
}

void	check_vars(t_info info)
{
	if (info.num_p <= 0 || info.t_sleep < 0 || info.t_eat < 0 || info.t_die < 0)
	{
		printf("Problem with args value\n");
		exit(EXIT_FAILURE);
	}
	if (info.n_to_win == 0)
	{
		printf("Simulation end\n");
		exit(EXIT_SUCCESS);
	}
}

long long	ft_time(void)
{
	struct timeval	te;
	long long		milliseconds;

	gettimeofday(&te, NULL);
	milliseconds = te.tv_sec * 1000LL + te.tv_usec / 1000;
	return (milliseconds);
}

void	wait_phil(long long time)
{
	long long	c_time;

	c_time = ft_time();
	while (ft_time() - c_time < time)
	{
		usleep(50);
	}
}
