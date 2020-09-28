#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*pdst;
	const char	*psrc;
	size_t		n;
	size_t		dstlen;

	pdst = dst;
	psrc = src;
	n = size;
	while (*pdst != '\0' && n-- != 0)
		pdst++;
	dstlen = pdst - dst;
	n = size - dstlen;
	if (n == 0)
		return (dstlen + ft_strlen(src));
	while (*psrc != '\0')
	{
		if (n != 1)
		{
			*pdst++ = *psrc;
			n--;
		}
		psrc++;
	}
	*pdst = '\0';
	return (dstlen + (psrc - src));
}
