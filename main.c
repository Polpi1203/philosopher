/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polpi <polpi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 17:12:39 by polpi             #+#    #+#             */
/*   Updated: 2023/04/18 19:19:15 by polpi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

int main(int ac, char **av)
{
    if (ac == 5)
    {
        parser(av);
        init_threads();
    }
    else
        printf("Missing arguments\n");
    return (0);
}