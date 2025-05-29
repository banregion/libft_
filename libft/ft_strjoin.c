#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
    size_t len1;
    size_t len2;

    len1 = ft_strlen(s1);
    len2 = ft_strlen(s2);

    char *res = malloc(len1 + len2 + 1);
    if(!res)
        return NULL;
    
    ft_memcpy(res, s1, len1);
    ft_memcpy(res + len1, s2, len2);
    res[len1 + len2] = '\0';

    return res;
}
/*
#include <stdio.h>
#include <stdlib.h>
int main() {
    const char* a = "Merhaba";
    const char* b = "Dünya";

    char* joined = strjoin(a, b);
    if (joined) {
        printf("Sonuç: %s\n", joined);
        free(joined);
    }

    return 0;
}
*/