#include "libft.h"
#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
/*void	ft_putendl_fd(char *s, int fd)
{
	int i = 0;

	if (!s)
		return;

	while (s[i])
		write(fd, &s[i++], 1);

	write(fd, "\n", 1);
}
*/
/*
int main()
{
	char a[] = "hello";
	ft_putendl_fd(a,1);
}
*/