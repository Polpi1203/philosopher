/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polpi <polpi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 13:55:13 by afaucher          #+#    #+#             */
/*   Updated: 2023/04/20 18:36:48 by polpi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

# define EAT 0
# define SLEEP 1
# define THINK 2
# define DIE 3

/*
-------------->Philos<---------------
*/
typedef struct s_philosopher
{
	int id;
	int	number_of_philosophers;
	pthread_mutex_t *left_fork;
	pthread_mutex_t *right_fork;
}	t_ph;

/*
-------------->Time<---------------
*/
typedef struct s_timeval 
{
   time_t	tv_sec;
   long int	tv_usec;
}	t_timeval;

typedef struct s_time_philo
{
	long int	time_to_die;
	long int	time_to_eat;
	long int	time_to_sleep;
	// long int	actual_time;
	// long int	seconde;
}	t_time_philo;

#endif