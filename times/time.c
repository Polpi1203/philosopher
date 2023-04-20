/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   time.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polpi <polpi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 15:53:50 by afaucher          #+#    #+#             */
/*   Updated: 2023/04/20 18:38:45 by polpi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/functions.h"

long int get_actual_time(void)
{
	long int		microseconde;
	long int		seconde;
	long int		actual_time;
	t_timeval	time;


	gettimeofday(&time, NULL);
	seconde = time.tv_sec * 1000;
	microseconde = time.tv_usec / 1000;
	actual_time = seconde + microseconde;
	printf("actual time : %ld\n", actual_time);
	return (actual_time);
}