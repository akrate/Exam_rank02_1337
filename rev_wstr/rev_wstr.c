/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoussama <aoussama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 16:04:05 by aoussama          #+#    #+#             */
/*   Updated: 2025/02/18 16:04:08 by aoussama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdlib.h>

int main(int ac,char **av)
{
    int i = 0;
    int j = 0;
    int es = 0;
    if (ac = 2)
    {
        while (av[1][i])
            i++;
        while (i >= 0)
        {
            while (av[1][i] != ' ' && i >= 0)
            {
                i--;
            }
            j = i + 1;
            while (av[1][j] != ' ' && av[1][j] != '\0')
            {
                write(1,&av[1][j],1);
                j++;
                es = 1;
            }
            if (es == 1 && i > 0)
            {
                write(1," ",1);
                es = 0;
            }
            i--;
        }
    }
    write(1,"\n",1);

}