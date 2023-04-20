/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polpi <polpi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 13:54:44 by afaucher          #+#    #+#             */
/*   Updated: 2023/04/20 18:35:36 by polpi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
# define FUNCTIONS_H


#include <pthread.h>
#include <sys/time.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "struct.h"
#include "../libft/srcs/libft.h"

//parsing

void	parser(char **av);

//threads

void *routine(void *arg);
int init_threads(void);

//actions

void    action_eat(void);
void   	action_sleep(void);
void    action_think(void);

//time

long int    get_actual_time(void);

#endif