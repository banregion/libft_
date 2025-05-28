#include "libft.h"
#include <stddef.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i = 0;
    size_t j;

    if (*needle == '\0')
        return (char *)haystack;

    while (i < len && haystack[i] != '\0')
    {
        j = 0;
        while (needle[j] != '\0' && haystack[i + j] != '\0' && i + j < len && haystack[i + j] == needle[j])
            j++;

        if (needle[j] == '\0')
            return (char *)&haystack[i];

        i++;
    }

    return NULL;
}
/*
#include <stdio.h>

void test_strnstr(const char *haystack, const char *needle, size_t len)
{
    char *result = ft_strnstr(haystack, needle, len);

    printf("Test: haystack=\"%s\", needle=\"%s\", len=%zu\n", haystack, needle, len);
    if (result)
        printf("  ✅ Bulundu: \"%s\"\n", result);
    else
        printf("  ❌ Bulunamadı.\n");
    printf("--------------------------------------------------\n");
}

int main(void)
{
    // Test senaryoları
    test_strnstr("merhaba dünya", "dün", 20);       // bulunmalı
    test_strnstr("merhaba dünya", "dün", 5);        // bulunmamalı
    test_strnstr("abcdef", "def", 6);               // bulunmalı
    test_strnstr("abcdef", "def", 5);               // bulunmamalı
    test_strnstr("abcdef", "", 3);                  // boş needle, haystack dönmeli
    test_strnstr("abcdef", "xyz", 10);              // eşleşme yok
    test_strnstr("aaaaaa", "aa", 2);                // ilk eşleşme dönmeli
    test_strnstr("test", "longneedle", 4);          // needle daha uzun
    test_strnstr("", "a", 1);                       // haystack boş
    test_strnstr("", "", 1);                        // ikisi de boş, haystack dönmeli

    return 0;
}
*/