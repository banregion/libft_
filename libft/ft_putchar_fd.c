#include "libft.h"
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
#include <fcntl.h>
int main()
{
	char a = 'a';
	ft_putchar_fd(a,2);
	int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1)
		return (1);  // dosya açılamadıysa çık

	ft_putchar_fd('Z', fd);  // 'Z' karakteri dosyaya yazılır

	close(fd);  // dosya tanımlayıcısını kapat
}
*/