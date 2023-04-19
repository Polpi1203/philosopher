/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_threads.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polpi <polpi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 15:09:00 by polpi             #+#    #+#             */
/*   Updated: 2023/04/19 16:22:18 by polpi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philosopher.h"

int init_threads(void)
{
	pthread_t	t1;
	pthread_t	t2;
	char	*test;
	char	*test2;

	test = "Hello amigo";
	test2 = "Goodbye amigo";

	pthread_create(&t1, NULL, &routine, test);
	pthread_create(&t2, NULL, &routine, test2);
	// Attendre que le thread s'éxecute 
	pthread_join(t1, NULL);
	pthread_join(t2, NULL);
	return (0);
}
