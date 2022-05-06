/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iannmari <iannmari@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 14:35:44 by iannmari          #+#    #+#             */
/*   Updated: 2022/05/06 14:37:32 by iannmari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo_bonus.h"

void	pthread_error(void)
{
	printf("pthread_mutex_init error\n");
}

void	fork_error(void)
{
	printf("Fork error\n");
	exit(EXIT_FAILURE);
}

void	malloc_error(void)
{
	printf("Malloc error\n");
	exit(EXIT_FAILURE);
}