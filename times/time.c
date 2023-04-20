/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   time.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaucher <afaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 15:53:50 by afaucher          #+#    #+#             */
/*   Updated: 2023/04/20 16:09:23 by afaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/functions.h"

long int get_actual_time(void)
{
	long int		microseconde;
	long int		seconde;
	long int		actual_time;
	struct timeval	time;


	gettimeofday(&time, NULL);
	seconde = time.tv_sec * 1000;
	microseconde = time.tv_usec / 1000;
	actual_time = seconde + microseconde;
	printf("actual time : %ld\n", actual_time);
	return (actual_time);
}