#include "libft.h"
#include <stdlib.h>
#include <stddef.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t i;
    size_t len;
    len = ft_strlen(s);
      
    if(!s || !f)
        return NULL;
    
    char* res = malloc(len + 1);
    if(!res)
        return NULL;

    i = 0;
    while(i < len)
    {
        res[i] = f(i, s[i]);
        i++;
    }
    res[len] = '\0';
    return res;
}
