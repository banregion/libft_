#include "libft.h"

static int ft_count(const char *s, char c)
{
	size_t count;
	size_t i;

	count = 0;
	i = 0;
	while(s[i])
	{
		while(s[i] && s[i] == c)
			i++;
	
		if(s[i] && s[i] != c)
		{
			count++;
			while(s[i] && s[i] != c)
				i++;
		}
	}
	return count;
}

static int word_len(const char *s, char c)
{
	size_t len;
	len = 0;
	while(s[len] && s[len] != c)
		len++;
	return len;
}

static void free_all(char **arr)
{
	size_t i;
	i = 0;
	while(arr[i])
		free(arr[i++]);
	free(arr);
}

char	**ft_split(char const *s, char c)
{
	size_t i;
	size_t word;
	char **res;
	res = malloc(word + 1);
	word = count(s,c);
	i = 0;

	if(!res)
		return NULL;

	if(!s)
		return NULL;

	while(*s)
	{
		while (*s && *s == c)
			s++;
	}
}