#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	{
		int i = 0;
		unsigned char cc = (unsigned char)c;
	
		i = ft_strlen(s);
		while (i >= 0)
		{
			if (s[i] == cc)
				return ((char *)&s[i]);
			i--;
		}
		// '\0' karakteri aranıyorsa bu da kontrol edilmeli
		if (s[i] == cc)
			return ((char *)&s[i]);
		return NULL;
	}
}
#include <stdio.h>
int main()
{
	char a[]= "merhaba";
	char *res = ft_strrchr(a,'a');
	printf("%s",res);
}
