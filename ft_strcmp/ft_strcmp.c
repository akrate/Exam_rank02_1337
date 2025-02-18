/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoussama <aoussama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 16:07:04 by aoussama          #+#    #+#             */
/*   Updated: 2025/02/18 16:07:05 by aoussama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

int    ft_strcmp(char *s1, char *s2)
{
    int i = 0;
    while (s1[i]&&s2[i])
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
            i++;
    }
            return (s1[i] - s2[i]);

}