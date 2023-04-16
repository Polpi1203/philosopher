/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polpi <polpi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 16:59:47 by polpi             #+#    #+#             */
/*   Updated: 2023/04/16 17:35:06 by polpi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philosopher.h"

void	parser(char **av)
{
	t_config	config;

	config.number_of_philosophers = ft_atoi(av[1]);
	config.time_to_die = ft_atoi(av[2]);
	config.time_to_eat = ft_atoi(av[3]);
	config.time_to_sleep = ft_atoi(av[4]);

	//number of philo == number of forks
	config.number_of_forks = config.number_of_philosophers;

	// printf("nb of philo : %d\n", config.number_of_philosophers);
	// printf("time to die : %d\n", config.time_to_die);
	// printf("time to eat : %d\n", config.time_to_eat);
	// printf("time to sleep : %d\n", config.time_to_sleep);
}