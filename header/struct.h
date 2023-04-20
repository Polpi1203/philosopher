/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaucher <afaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 13:55:13 by afaucher          #+#    #+#             */
/*   Updated: 2023/04/20 16:08:08 by afaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

# define EAT 0
# define SLEEP 1
# define THINK 2
# define DIE 3


typedef struct s_philosopher
{
	int id;
	int	number_of_philosophers;
	int time_to_die;
	int	time_to_eat;
	int	time_to_sleep;
	pthread_mutex_t *left_fork;
	pthread_mutex_t *right_fork;
}	t_ph;

typedef struct s_timeval 
{
   time_t	tv_sec;
   long int	tv_usec;
}	t_timeval;

#endif