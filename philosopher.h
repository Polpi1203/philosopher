/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosopher.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polpi <polpi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 14:43:20 by polpi             #+#    #+#             */
/*   Updated: 2023/04/19 16:32:03 by polpi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <pthread.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "../libft/srcs/libft.h"

typedef struct s_config {
	int	number_of_philosophers;
	int	number_of_forks;
	int	time_to_die;
	int	time_to_eat;
	int	time_to_sleep;
}	t_config;


//parsing

void	parser(char **av);

//threads

void *routine(void *arg);
int init_threads(void);

//actions

void    action_eat(void);
void   	action_sleep(void);
void    action_think(void);