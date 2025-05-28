#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *ptr = (unsigned char *) b;

	while(len--)
	{
		*ptr++ = (unsigned char)c;
	}

	return b;

}
/*
#include <stdio.h>
int main()
{
	char buf[5] = "abbbc";
	ft_memset(buf,'Z',5);
	buf[5] = '\0';
	printf("%s\n",buf);
}*/