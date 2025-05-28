#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int i;

	i = 0;
	while(s[i] != '\0')
	{
		write(fd,&s[i++],1);
	}
}
/*
int main()
{
	char a[] = "hello";
	ft_putstr_fd(a,1);
}
*/