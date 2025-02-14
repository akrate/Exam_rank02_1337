#include <unistd.h>

void	print_bits(unsigned char octet)
{
    int i = 7;
    int o = octet;
    char result[8];
    while (i >= 0)
    {
        if ((o & 1) == 1)
        {
            result[i] = '1';
        }else{
            result[i] = '0';
        }
        i--;
        o = o >> 1;
    }
    i = 0;
    while (i < 8)
    {
        write(1,&result[i],1);
        i++;
    }
}

