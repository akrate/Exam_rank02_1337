/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoussama <aoussama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 16:06:26 by aoussama          #+#    #+#             */
/*   Updated: 2025/02/18 16:06:27 by aoussama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
void ft_putnbr(int i)
{
    char *str = "0123456789";
    if(i > 9)
    {
        ft_putnbr(i / 10);
    }
    write(1,&str[i % 10], 1);
}
int main()
{
    int i = 1;
        while(i <= 100)
        {
            if ((i % 5 == 0) && (i % 3 == 0))
            {
                 write(1, "fizzbuzz\n", 9);
                i++;
            }
            else if(i % 3 == 0)
            {
                write(1, "fizz\n", 5);
                i++;
            }else if (i % 5 == 0)
            {
                 write(1, "buzz\n", 5);
                i++;
            } else
            {
                ft_putnbr(i);
                write(1,"\n",1);
                i++;
            }
         }
}