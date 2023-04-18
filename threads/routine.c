/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   routine.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polpi <polpi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 19:08:40 by polpi             #+#    #+#             */
/*   Updated: 2023/04/18 19:20:23 by polpi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philosopher.h"

void *routine(void *arg)
{
    printf("Thread -> %s\n", (char *)arg);
    sleep(10);
    return (NULL);
}