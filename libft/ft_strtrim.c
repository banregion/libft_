#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*result;

	while (*s1 && ft_strchr(set, *s1))
		s1++;
	len = ft_strlen(s1);
	while (len && ft_strchr(set, s1[len - 1]))
		len--;
	result = malloc(len + 1);
	if (!result)
		return (0);
	ft_memcpy(result, s1, len);
	result[len] = '\0';
	return (result);
}
/*
#include <stdio.h>
int main(void)
{
    const char *s1 = "\t\n  Hello World!  \n\n";
    const char *set = " \n\t";

    char *trimmed = ft_strtrim(s1, set);

    if (trimmed)
    {
        printf("Original : '%s'\n", s1);
        printf("Trimmed  : '%s'\n", trimmed);
        free(trimmed);
    }
    else
    {
        printf("Memory allocation error or NULL.\n");
    }

    // Additional test cases
    printf("\n--- Additional Tests ---\n");

    printf("1: '%s'\n", ft_strtrim("$$$Test Message!!!", "$!"));     // 'Test Message'
    printf("2: '%s'\n", ft_strtrim("-----", "-"));                    // ''
    printf("3: '%s'\n", ft_strtrim("  In the middle  ", " "));        // 'In the middle'
    printf("4: '%s'\n", ft_strtrim("NoTrim", ""));                    // 'NoTrim'

    return 0;
}
*/