#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t i;
	unsigned char *d;
	const unsigned char *s;

	if(!dst && !src)
		return (NULL);

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;

	if (d == s || n == 0)
		return dst;

	if(d < s)
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (n--)
		{
			i--;
			d[i] = s[i];
		}
	}

	return (dst);
		
}
#include <stdio.h>
#include <string.h>

int main()
{
    // 1) Çakışma olmayan durum
    char src1[20] = "Hello, World!";
    char dest1[20];

    ft_memmove(dest1, src1, 14);  // null karakter dahil
    printf("ft_memmove (non-overlap): %s\n", dest1);

    // 2) Bellek çakışması (overlap) - ileri yönde kopyalama
    char overlap1[20] = "1234567890";
    ft_memmove(overlap1 + 2, overlap1, 8);
    printf("ft_memmove (overlap forward): %s\n", overlap1);

    // 3) Bellek çakışması (overlap) - geri yönde kopyalama
    char overlap2[20] = "abcdefghij";
    ft_memmove(overlap2, overlap2 + 2, 8);
    printf("ft_memmove (overlap backward): %s\n", overlap2);

    return 0;
}