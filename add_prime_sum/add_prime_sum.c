#include <unistd.h>
int ft_atoi(char *str)
{
    int i = 0;
    int result = 0;

    while (str[i] == ' ')
        i++;
    while (str[i] >= '0' && str[i] <= '9')
    {
        result *= 10;
        result = result + str[i] - '0';
        i++;
    }
    return (result);
}
int ft_isprime(int nbr)
{
    int i = 2;
    while (i < nbr)
    {
        if(nbr % i == 0) 
        {
            return (0);
        }
        i++;
    }
    return (1);
}
void ft_putnbr(int nbr)
{
    char *str = "0123456789";
    if (nbr > 9)
        ft_putnbr(nbr / 10);
    write(1,&str[nbr % 10],1);
}
int main(int ac,char **av)
{
    int i = 2;
    int result = 0;
    if (ac != 2)
    {
        write (1,"0",1);
        write (1,"\n",1);
        return 0;
    }
    int n = ft_atoi(av[1]);
    while (i <= n)
    {
        if (ft_isprime(i) == 1)
        {
            result += i;
        }
        i++;
    }
    ft_putnbr(result);
    write (1,"\n",1);
  
}