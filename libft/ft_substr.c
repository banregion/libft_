#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t total_len = strlen(s);

	if (start >= total_len) 
	{
		char *empty = malloc(1);
		if(!empty)
			return NULL;
		empty[0] = '\0';
		return empty;
	}
		

	if (start + len > total_len) 
		len = total_len - start;

	char* res = (char*)malloc(len + 1);
	if (!res) 
		return NULL;

	ft_memcpy(res, s + start, len);
	res[len] = '\0';

	return res;
}
#include <stdio.h>
int main() 
{
    const char* metin = "Merhaba Dünya";

    char* parca = ft_substr(metin, 8, 5);
    if (parca) {
        printf("Orijinal metin: %s\n", metin);
        printf("Alinan alt string: %s\n", parca);
        free(parca);  // Belleği serbest bırak
    } else {
        printf("Gecersiz parametre veya bellek hatasi.\n");
    }

    return 0;
}