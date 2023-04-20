/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaucher <afaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 17:12:39 by polpi             #+#    #+#             */
/*   Updated: 2023/04/20 16:05:49 by afaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/functions.h"

int main(int ac, char **av)
{
    //t_ph	philo;
    
    if (ac == 5)
    {
        get_actual_time();
        parser(av);
        init_threads();
    }
    else
        printf("Missing arguments\n");
    return (0);
}