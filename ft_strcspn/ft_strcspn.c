/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoussama <aoussama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 16:07:41 by aoussama          #+#    #+#             */
/*   Updated: 2025/02/18 16:07:42 by aoussama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
    int i = 0;
    int j;
    while (s[i])
    {
        j = 0;
        while (reject[j])
        {
            if(reject[j] == s[i])
            {
                return (i);
            }
            j++;
        }
        i++;
    }
    return (i);
}