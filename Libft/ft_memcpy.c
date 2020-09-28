#include <string.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*pdst;
	const char	*psrc;

	pdst = (char *)dst;
	psrc = (const char *)src;
	while (n--)
		*pdst++ = *psrc++;
	return (dst);
}
