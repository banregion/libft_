#include "libft.h"
#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;
	unsigned char *d;
	const unsigned char *s;

	if(!dst && !src)
		return (NULL);

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;

	i = 0;
	while(i < n)
		{
			d[i] = s[i];
			i++;
		}
	return (dst);	
}
#include <stdio.h>
int main()
{
	char a[5] = "hello";
	char b[5];
	ft_memcpy(b,a,5);
	printf("%s",b);
}