/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   routine.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaucher <afaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 19:08:40 by polpi             #+#    #+#             */
/*   Updated: 2023/04/20 16:14:55 by afaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/functions.h"

int test = 0;
pthread_mutex_t mutex;

void *routine(void *arg)
{
	(void)arg;

	action_eat();
	action_think();
	action_sleep();

	// TEST // 
	// pthread_mutex_lock(&mutex);
    // for (int i = 0; i < 1000000; i++)
	// 	test++;
    // sleep(1);
	// pthread_mutex_unlock(&mutex);
    return (NULL);
}   

int init_threads()
{
	pthread_t	t1;
	pthread_t	t2;
	//char	*test;
	// char	*test2;

	// test = "Hello amigo";
	// test2 = "Goodbye amigo";

	//Verouiller avec un mutex, faire l'action et deverouiller le mutex !! 

	pthread_mutex_init(&mutex, NULL);
	pthread_create(&t1, NULL, &routine, NULL);
	pthread_create(&t2, NULL, &routine, NULL);
	// Attendre que le thread s'éxecute 
	pthread_join(t1, NULL);
	pthread_join(t2, NULL);
	printf("Number of test : %d\n", test);
	//Destroy mutex
	pthread_mutex_destroy(&mutex);
	return (0);
}
