#include <unistd.h>

int main(int ac,char **av)
{
    int i = 0;
    int j;
    if (ac == 2)
    {
        while (av[1][i] <= 32)
            {
                i++;
            }
        while (av[1][i])
        {
            j = 0;
            while (av[1][i] <= 32)
            {
                i++;
                j++;
                if (av[1][i] == '\0')
                {
                    write(1,"\n",1);
                    return (0);
                }
            }if (j >= 1)
            {
                write(1," ",1);
                j = 0;
            }
            while (av[1][i] > 32 &&av[1][i])
            {
                write(1,&av[1][i],1);
                i++;
            }
        }
    }
    write(1,"\n",1);
}