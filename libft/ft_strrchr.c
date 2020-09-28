/#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*strr;

	strr = NULL;
	while (*s)
	{
		if (*s == (char)c)
			strr = (char *)s;
		s++;
	}
	if (*s == (char)c)
		strr = (char *)s;
	return (strr);
}
