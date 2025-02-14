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
// int main()
// {
//     char *s = "hello world?>?>?>,";
//     char *reject = "ko";
//     int i = strcspn(s,reject);
//     int j = ft_strcspn(s,reject);
//     printf("%d\n",i);
//     printf("%d\n",j);

// }