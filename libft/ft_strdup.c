#include <string.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dst;
	size_t	len;

	len = ft_strlen(s1);
	dst = ft_strnew(len);
	if (!dst)
		return (NULL);
	while (len--)
		dst[len] = s1[len];
	return (dst);
}
