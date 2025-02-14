#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
void putstr(char *str)
{
    int i;
    while (str[i])
    {
        write(1,&str[i],1);
        i++;
    }
}
int main(int ac,char **av)
{
    char *str1 = (char *)malloc(100);

    int i = 0;
    int j = 0;
    if (ac > 1)
    {
        while (av[1][i] && av[1][i] == ' ')
            i++;
        while (av[1][i] && av[1][i] != ' ')
            str1[j++] = av[1][i++];
            str1[j] = '\0';
        j = 0; 
        while (av[1][i])
        {
            while (av[1][i] != ' ' && av[1][i])
            {
                write(1,&av[1][i],1);
                    i++;
                j = 1;
            }
            while (av[1][i] && av[1][i] == ' ')
            i++;
            if (j)
            {
                j = 0;
                write(1," ",1);
            }
            
        }
        putstr(str1);
    }
                write(1,"\n",1);

}