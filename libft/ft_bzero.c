#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char *ptr = (unsigned char *)s;

	while(n--)
		*ptr++ = '\0';
}
#include <stdio.h>
int main()
{
	char buf[5] = "abbc";
	printf("%s\n",buf);
	ft_bzero(buf,5);
	printf("%s",buf);
}