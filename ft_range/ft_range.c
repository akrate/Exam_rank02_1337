/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoussama <aoussama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 16:06:40 by aoussama          #+#    #+#             */
/*   Updated: 2025/02/18 16:06:41 by aoussama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>

int     *ft_range(int start, int end)
{
    int *result;
    int i = 0;
    int j;
    int count = 0;
    if (start == end)
    {
        result = (int *)malloc((1) * sizeof(int));
        result[i] = 0;
        return (result);

    }
    else if (start < end)
    {
        j = start;
        while (j < end)
        {
            j++;
            count++;
        }
        result = (int *)malloc((count) * sizeof(int));
        while (start <= end)
        {
            result[i] = start;
            start++;
            i++;
        }
        return (result);

    }
    else if (start > end)
    {
        j = end;
        while (j <= start)
        {
            j++;
            count++;
        }
        result = (int *)malloc((count) * sizeof(int));
        while (start >= end)
        {
            result[i] = start;
            start--;
            i++;
        }
        return (result);

    }
    
}