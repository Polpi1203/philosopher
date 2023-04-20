/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaucher <afaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 13:54:44 by afaucher          #+#    #+#             */
/*   Updated: 2023/04/20 13:57:58 by afaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTS_H
# define STRUCTS_H


#include <pthread.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "functions.h"
#include "libft/srcs/libft.h"

//parsing

void	parser(char **av);

//threads

void *routine(void *arg);
int init_threads(void);

//actions

void    action_eat(void);
void   	action_sleep(void);
void    action_think(void);

#endif