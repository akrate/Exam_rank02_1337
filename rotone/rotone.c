/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoussama <aoussama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 16:09:21 by aoussama          #+#    #+#             */
/*   Updated: 2025/02/18 16:09:22 by aoussama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

int main(int ac,char **av)
{
    int i = 0;
    if (ac == 2)
    {
        while (av[1][i])
        {
            if (av[1][i] >= 'a' && av[1][i] <= 'y')
            {
                av[1][i] = av[1][i] + 1;
                write(1,&av[1][i],1);
            }else if(av[1][i] >= 'A' && av[1][i] <= 'Y')
            {
                av[1][i] = av[1][i] + 1;
                write(1,&av[1][i],1);
            }else if(av[1][i] >= 'z')
            {
                write(1,"a",1);
            }else if(av[1][i] >= 'Z')
            {
                write(1,"A",1);
            }else 
                write(1,&av[1][i],1);
            i++;
        }
    }
    write(1,"\n",1);
}