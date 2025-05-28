#include "libft.h"
#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*str;
	unsigned char		uc;

	str = (const unsigned char *)s;
	uc = (unsigned char)c;
	i = 0;

	while(i < n)
		{
			if(str[i] == uc)
				return ((void *)(str + i));
			i++;
		}
	return (NULL);
}
#include <stdio.h>
int main()
{
	int str[] = {1,2,3,4,5};
	unsigned char *res = ft_memchr(str,2,5);
	printf("%p\n",res);
	printf("%d",*res);
}