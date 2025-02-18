/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoussama <aoussama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 16:06:48 by aoussama          #+#    #+#             */
/*   Updated: 2025/02/18 16:06:49 by aoussama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
    int *nbr;
    int count = 0;
    int st;
    if (start < end)
    {
        st = start; 
        while (st < end)
        {
            st++;
            count++;
        }
        nbr = (int *)malloc(count * sizeof(int));
        st = 0;
        while (start <= end)
        {
            nbr[st] = end;
            end--;
            st++;
        }
        return (nbr);
    }else if (start > end)
    {
        st = end; 
        while (st < start)
        {
            st++;
            count++;
        }
        nbr = (int *)malloc(count * sizeof(int));
        st = 0;
        while (start >= end)
        {
            nbr[st] = end;
            end++;
            st++;
        }
        return (nbr);
    }
}
