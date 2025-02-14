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
