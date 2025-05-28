#include "libft.h"
#include <string.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t total_size = count * size;
	void *ptr;

	if(count != 0 && size != 0 && total_size / size != count)
		return (NULL);

	ptr = malloc(total_size);
	if(!ptr)
		return (NULL);

	ft_memset(ptr,0,total_size);
	return (ptr);
}
#include <stdio.h>

int main() {
    int* arr = (int*)ft_calloc(5, sizeof(int));
    if (arr == NULL) {
        printf("Bellek ayrılamadı.\n");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);  // Hepsi 0 olmalı
    }

    free(arr);  // Unutma: malloc/calloc ile ayrılan bellek free edilmelidir
    return 0;
}