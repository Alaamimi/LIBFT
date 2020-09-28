#include <string.h>
#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	char	*pdst;

	pdst = dst;
	while (*src != '\0' && n > 0)
	{
		*pdst++ = *src++;
		n--;
	}
	while (n > 0)
	{
		*pdst++ = '\0';
		n--;
	}
	return (dst);
}
