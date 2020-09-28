#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	char	*pdst;

	pdst = dst;
	while (*src)
		*pdst++ = *src++;
	*pdst = '\0';
	return (dst);
}
