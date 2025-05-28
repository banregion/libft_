#include "libft.h"

int		ft_atoi(const char *str)
{
    while(*str == ' ' || (*str >= 9 && *str <= 13))
        str++;
    int sign = 1;
    if(*str == '-' || *str == '+')
    {
        if(*str == '-')
            sign = -1;
        str++;    
    }
    int res;
    res = 0;
    while(*str >= '0' && *str <= '9')
    {
        res = res * 10 + (*str - '0');
        str++;
    }
    return (res * sign);
}