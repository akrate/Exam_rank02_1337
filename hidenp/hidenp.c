/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoussama <aoussama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 16:07:48 by aoussama          #+#    #+#             */
/*   Updated: 2025/02/18 16:07:49 by aoussama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

int main(int ac,char **av)
{
    int i = 0;
    int j = 0;
    int count = 0;
    if (ac == 3)
    {
        while (av[1][i])
        {
            while (av[2][j])
            {
                if (av[1][i] == av[2][j])
                {
                    count++;
                    break;
                }
                j++;
            }
            i++;
        }
        if (i == count)
            write(1,"1",1);
        else
            write(1,"0",1);
    }
    write(1,"\n",1);
}