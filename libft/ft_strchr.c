#include "libft.h"


char	*ft_strchr(const char *s, int c)
{
	size_t i = 0;
	unsigned char cc = (unsigned char)c;

	while (s[i] != '\0')
	{
		if (s[i] == cc)
			return ((char *)&s[i]);
		i++;
	}
	// '\0' karakteri aranıyorsa bu da kontrol edilmeli
	if (s[i] == cc)
		return ((char *)&s[i]);
	return NULL;
}
#include <stdio.h>
int main()
{
	char a[]= "merhaba";
	char *res = ft_strchr(a,'a');
	printf("%s",res);
}