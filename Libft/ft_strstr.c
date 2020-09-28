#include <string.h>
#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t		len;

	if (*s2 == '\0')
		return ((char *)s1);
	if (!s2)
		return ((char *)s1);
	len = ft_strlen(s2);
	while (*s1)
	{
		if (ft_strncmp(s1, s2, len) == 0)
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}
